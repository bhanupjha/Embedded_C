// rand function calling with getpid() -> process id
// process ID is usually different for every execution, the generated
// sequence also 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	srand(getpid());
	// intialize number generator
	printf("%d\n", rand());
}
