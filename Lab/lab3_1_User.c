#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 20

typedef struct{
  char id[MAX_STR];
  int birth_year;
} Member;

void sign_up(Member *list,int* N){
  enum bool{FALSE,TRUE};
  char id[MAX_STR];
  enum bool isoverlap = FALSE;

  printf("회원 아이디는?");
  scanf("%s",id);
  int i=0;
  while(i<*N){
    if(!strcmp(list[i].id,id)){
      isoverlap = TRUE;
    }
    i++;
  }

  if(isoverlap){
    printf("존재하는 아이디입니다.\n");
  }
  else{
    (*N) ++;
    list = (Member*)realloc(list,sizeof(Member)*(*N));
    strcpy(list[*N-1].id, id);
    printf("회원생년은?");
    scanf("%d",&list[*N-1].birth_year);
    printf("추가되었습니다.\n");
  }
}

void list_up(Member *list,int N){
  printf("%d명이 검색되었습니다.\n",N);
  printf("-----------------\n");
  printf("번호\t 회원id\t 태어난해\n");
  for(int i=0;i<N;i++){
    printf("%d\t %s\t %d\n",i+1,list[i].id,list[i].birth_year);
  }
}


int main(){
  int keyin,size;
  enum Menu{SIGN_UP=1,LIST_UP,QUIT};
  size=0;
  Member *member = (Member*) malloc(sizeof(Member)*size);

  while(1){
    printf("원하는 메뉴는? (1.Sign up 2.List up 3.Quit)");
    scanf("%d",&keyin);

    switch(keyin){
      case SIGN_UP:
        sign_up(member,&size);
        break;
      case LIST_UP:
        list_up(member,size);
        break;
      case QUIT:
        break;
      default:
        printf("Wrong input! try again\n");
    }
    if(keyin == QUIT)
      break;
  }
  printf("종료됨\n");
  free(member);
}
