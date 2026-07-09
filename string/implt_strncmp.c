#include<stdio.h>
#include<string.h>
//int mystrncmpy(char *, char *, int);
int mystrcmpy(char*,char*);
int main()
{
	char str1[5]="abd";
	char str2[5]="abc";
	//int bytes;
	printf("PREVIOUS: str1: %s, str2: %s\n", str1, str2);
	//printf("How many bytes u want to compare: ");
	//scanf("%d", &bytes);
	//int res=mystrncmpy(str1, str2, bytes);
	int res=mystrcmpy(str1,str2);
	printf("Both string compared with no.of bytes to compared and value is: %d\n", res);
}

/*int  mystrncmpy(char *s1, char *s2, int byt)
{
	while(byt>0 &&*s1&&*s2){
	
		if(*s1!=*s2)
		{
			return *s1-*s2;
		}
			s1++;
			s2++;
			byt--;
	}
	if(byt==0){
		return 0;
	}
		return *s1-*s2;
}
//	return *s1-*s2;
*/
int  mystrcmpy(char *s1, char *s2)
{
        while(*s1&&*s2){

                if(*s1!=*s2)
                {
                        return *s1-*s2;
                }
                        s1++;
                        s2++;
                        //byt--;
        }
        //if(byt==0){
              //  return 0;
        //}
                return *s1-*s2;
}

