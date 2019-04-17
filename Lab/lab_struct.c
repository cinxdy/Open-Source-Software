#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char name[20];
  char addr[100];
  int age;
} personList;

void input(personList* list, int size){

  for(int i=0;i<size;i++){
    printf("%d-th student name?\n",i+1);
    scanf("%s",list[i].name);
    getchar();
    printf("%d-th student address?\n",i+1);
    scanf("%s",list[i].addr);
    printf("%d-th student age?\n",i+1);
    scanf("%d",&list[i].age);
  }
}

void print(personList* list, int size){
  for(int i=0;i<size;i++){
    printf("%d-th student name? %s\n",i+1,list[i].name);
    printf("%d-th student address? %s\n",i+1,list[i].addr);
    printf("%d-th student age? %d\n",i+1,list[i].age);
  }
}

int main(){
  int size;
  personList *Student = NULL;

  printf("Enter a size of struct \n");
  scanf("%d",&size);
  Student = (personList*)malloc(sizeof(personList)*size);

  input(Student,size);
  print(Student,size);

}
