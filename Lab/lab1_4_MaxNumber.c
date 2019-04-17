#include <stdio.h>
#define SIZE 10

int maxNum(int *num, int size){
  int maxNum = num[0];
  for(int i=1;i<SIZE;i++){
    if(maxNum<num[i]) maxNum = num[i];
  }
  return maxNum;
}

void input(int *num){
  for(int i=0;i<SIZE;i++){
    printf("%d번째 숫자 입력 :",i+1);
    scanf("%d",&num[i]);
  }
}

int main(){
  int num[SIZE];

  input(num);
  printf("최댓값은 %d\n",maxNum(num,SIZE));
  return 0;
}
