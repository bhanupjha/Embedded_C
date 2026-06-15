#include<stdio.h>

 int main()
    {
        int i = 0, j = 0;
     for (i; i < 2; i++)
{
         for (j = 0; j < 3; j++)
{
         printf("inner loop\n");
                break;
            }
            printf("outer loop\n");
        }
        printf("after loop\n");
    }

