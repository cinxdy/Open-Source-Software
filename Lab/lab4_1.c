#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 30
#define MAX_WORD 100

void initialList(char**,int*,int );
void addList(char**,int,int* );
void showList(char**,int,int);
void saveList(char**,int,int*);

int main(){
    enum MENU {ADD=1,SHOW,SAVE,QUIT};
    char *word[MAX_WORD];
    for(int i=0;i<MAX_WORD;i++)
        word[i] = (char *)malloc(MAX_STR*sizeof(char*));
    int menu;
    int ing=1;
    int sizei= 0,sizea=0;
    
    while(ing){
        initialList(word,&sizei,sizea);
        printf("\tChoose the menu\n");
        printf("\t1) ADD 2) SHOW 3) SAVE 4) QUIT\n\t");
        scanf("%d",&menu);
        switch(menu){
            case 1: addList(word,sizei,&sizea); break;
            case 2: showList(word,sizei,sizea); break;
            case 3: saveList(word,sizei,&sizea); break;
            case 4: saveList(word,sizei,&sizea);ing =0; break;
        }
    }
    printf("\tBYE!\n");
    return 0;
}

void initialList(char** list, int* initial,int add){
    int initialSize =0;
    FILE *fp = fopen("dictionary.txt","rt");
    while(!feof(fp)){
        fscanf(fp,"%s",list[initialSize]);
        initialSize++;
    }
    fclose(fp);
    *initial = initialSize;
}


void addList(char** list, int initial,int* add){
    int addSize=0;
    printf("\tInput the number of words you add\n\t");
    scanf("%d",&addSize);
    getchar();

    for(int i=0;i<addSize;i++){
        printf("\tType the word you add\n\t%d) ",i+1);
        gets(list[initial+*add+i]);
    }

    *add += addSize;
}
void showList(char** list, int initial,int add){
    printf("\t<Existing Words>\n");
    for(int i=0;i<initial;i++){
        printf("\t%d) %s\n",i+1,list[i]);
    }
    if(add != 0){
        printf("\t<Added Words>\n");
        for(int i=0;i<add;i++){
            printf("\t%d) %s\n",i+1+initial,list[i+initial]);
        }
    }
}

void saveList(char** list, int initial,int* add){
    FILE *fp = fopen("dictionary.txt","wt");
    for(int i=0;i<initial+*add;i++){
        fprintf(fp,"%s",list[i]);
        if(i!=initial+*add-1) fprintf(fp,"\n");
    }
    fclose(fp);
    printf("\tSAVED!\n");
    *add = 0;
}