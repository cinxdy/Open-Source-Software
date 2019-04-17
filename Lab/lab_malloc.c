#include <stdio.h>
#include<stdlib.h>

int* input(int size){
  int* list= NULL;


  list = (int*)malloc(sizeof(int*)*size);

  for(int i=0;i<size;i++){
    printf("Enter a number %d\n",i+1);
    scanf("%d",list+i);
  }
  return list;
}

void sum(int *s, int size){
  int sum=0;
  for(int i=0;i<size;i++)
    sum += s[i];

  printf("Total : %d\n",sum);
}

int main(){
  int *score, size;

  printf("Enter a size of number\n");
  scanf("%d",&size);
  score = input(size);
  sum(score,size);

}
