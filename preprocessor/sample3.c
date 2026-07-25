#ifdef _SAMPLE3_C  // ifdef -> it will not added in calling file
#define _SAMPLE3_C
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
// header file sample3 not added at preprocessor stage
// in predefine header file already added this cond , in user define we have to add it
// declare above conditional statement in header file  not in calling file
int main()
{

	printf("Hello world!");
}
#endif
