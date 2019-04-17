#include <stdio.h>

void input(char *ch,int *size){
  printf("출력문자는? ");
  scanf("%c",ch);
  printf("크기는? ");
  scanf("%d",size);
}

void print(char ch, int size){
  int star = size;
  for(int i=0;i<size;i++){
    for(int j=0;j<(size-star)/2;j++){
      printf(" ");
    }
    for(int j=0;j<star;j++){
      printf("%c",ch);
    }
    printf("\n");
    if(i<size/2) star-=2;
    else star+=2;
  }
}

int main(){
  char ch;
  int size;

  input(&ch,&size);
  print(ch, size);
}
