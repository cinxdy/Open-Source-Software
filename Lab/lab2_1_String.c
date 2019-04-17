#include<stdio.h>
#include<stdlib.h>

int main(){
  char **fruit;
  int n=0;

  printf("문자열 몇 개?\n");
  scanf("%d",&n);

  fruit = (char **) malloc(sizeof(char*)*n);
  if(fruit==NULL) {
    printf("failed to memory allocate!\n");
    exit(-1);
  }

  fruit[0] = (char *) malloc(sizeof(char*)*30*n);
  if(fruit[0]==NULL) {
    printf("failed to memory allocate!\n");
    exit(-1);
  }
  for(int i=1;i<n;i++)
    fruit[i] = fruit[ i-1 ] + 30;


  for(int i=0;i<n;i++){
    printf("문자열 입력:\n");
    scanf("%s",fruit[i]);
  }

  for(int i=0;i<n;i++){
    printf("문장: %s\n",fruit[i]);
  }

  free(fruit[0]);
  free(fruit);

}
