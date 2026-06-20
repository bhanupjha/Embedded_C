//WAP to print all no. in the range whose sum of digit is equal to 7 after reducing 
// to single digit
#include<stdio.h>
int sum(int, int);
int digit(int);
int main()
{
	int num, num2, total;
	printf("Enter the number in range: ");
	scanf("%d %d", &num, &num2);
	total=sum(num, num2);
	if(total<9)
	{
		printf("Invalid range");
	}

}

int sum(int n1, int n2)
{
	int i, result;
	for(i=n1; i<=n2; i++)
	{
		result=digit(i);
        // 	printf("The sum of digit of %d is equal to 7 is: %d\n",i, result);
		if(result>9)
		{
			i=result;
			result=0;
			result=digit(i);
			if(result==7)
			{
				printf("The sum of digit in range is equal to 7 is: %d\n",result);
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
	return result;

}

int digit(int dig)
{
	int temp=dig, digit,sum=0;
	while(temp)
        {
		digit=temp%10;
                sum+=digit;
                temp=temp/10;
        }
	return sum;
}
