#include<stdio.h>
#define MAX_String 20
#define N 3

void input(char *name, int *s){
  char s_name[N][MAX_String]={"국어","영어","수학"};

  printf("학생 이름 입력 : ");
  scanf("%s",name);
  for(int i=0;i<N;i++){
    printf("%s 점수 입력 : ",s_name[i]);
    scanf("%d",s+i);
  }
}

void print(char *name,int *s){
  int sum=0;
  //calculate
  for(int i=0;i<N;i++)
    sum += s[i];

  printf("%s 학생의 총 합계는 %d 이고 평균은 %.2f\n",name,sum,sum/N*1.0);
}

int main(){
  int score[N];
  char name[MAX_String];

  input(name,score);
  print(name,score);
}
