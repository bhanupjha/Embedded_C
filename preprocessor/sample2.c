#ifndef _SAMPLE2_C  // ifndef -> if not define
#define _SAMPLE2_C
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
// header file added only one time at preprocessor stage
// in predefine header file already added this cond , in user define we have to add it
// declare above conditional statement in header file  not in calling file
int main()
{

	printf("Hello world!");
}
#endif
