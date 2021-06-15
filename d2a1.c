#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[10]={};
	int i;
	printf("Enter the password\n");
	for(i=0; i<10; i++)
	{
		arr[i]=getch();
		if(arr[i] != '\n')
		{ 
			printf("*");
		}
		else
		{
			break;
		}
	
	}
	return 0;
}
