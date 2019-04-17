#include<stdio.h>
#define N 4
//21800409 신지영

int main(){
    int price=0;
    double point[N]={0.F};
    int way=0;
    float percent[N]={1.5,2,1,0.5};
    int sum=0;

    while(1){
        printf("식사금액과 지불방법(현금 1, VIP카드 2, 체크카드 3, 신용카드 4)을 입력하시오.\n");
        scanf("%d %d",&price,&way);
        if(price==0) break;
        point[way-1]+= price * percent[way-1]/100;
        sum+=point[i];
    }

    printf("지불방법에 따라 적립된 포인트는 다음과 같습니다.\n");
    printf("현금 %d원, VIP카드 %d원, 체크카드 %d원, 신용카드 %d원\n",point[0],point[1],point[2],point[3]);
    printf("총 적립된 포인트는 %d원 입니다.\n",sum);
}
