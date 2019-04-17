// main.c

#include "menu.h"
#include "guest.h"

int main(){
	#ifdef DEBUG_MODE
	printf("DEBUG_MODE: main()\n");
	#endif
	displayMenu();
	int menu = addGuest();
	displayGuest(menu);
return 0;
}
