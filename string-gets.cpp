#include<stdio.h>
int main()
{
	char name[10],full_name[20],Adress[30];
	printf("Enter your name");
	scanf("%s",name);
	printf("%s\n",name);
	getchar();
	printf("Enter your full name:");
	scanf("%[^\n]",full_name);
	printf("\n%s",full_name);
}
