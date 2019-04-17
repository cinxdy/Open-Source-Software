#include <stdio.h>

int main(void) {
  int Size;

  printf("Input the size\n");
  scanf("%d",&Size);

  int Star = 1;
  int Blank = Size - Star;


  for(int i=0;i<Size;i++){
    for(int j=0;j<Blank;j++){
      printf(" ");
    }
    for(int j=0;j<Star;j++){
      printf("*");
    }
    for(int j=0;j<Blank;j++){
      printf(" ");
    }
    printf("\n");

    Star+=2;
    Blank-=1;
  }
}
