// guest.c

#include "guest.h"

int addGuest(){
	#ifdef DEBUG_MODE
	printf("DEBUG_MODE: guest()\n");
	#endif

	int menu;
	printf("원하는 메뉴는? ");
	scanf("%d",&menu);
	return menu;
}

void displayGuest(int menu){
        #ifdef DEBUG_MODE
        printf("DEBUG_MODE: \n");
        #endif

	if(menu == 1)
		printf("Pizza 선택 ");
 	else
		printf("Chicken 선택 ");
}

#if 0
int main(){
	addGuest();
	displayGuest(1);
	displayGuest(2);
}
#endif
