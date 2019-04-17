//menu.c

#include "menu.h"

void displayMenu(){
	#ifdef DEBUG_MODE
  	printf("DEBUG MODE: displayMenu()\n");
	#endif

	printf("*********************\n");
	printf("1. Pizza   : 20000\n");
	printf("2. Chicken : 12000\n");
	printf("*********************\n");
}

#if 0
int main(){

	displayMenu();
}

#endif
