#include<stdio.h>
//uninitialised global and static variables will be stored
//in uninitialised data segment(BSS-> Block started by symbol) and are initialised with 0.
static int x; 
int y;
int main()
{ 
	printf("%d %d",x,y); //0 0
}
