//5!=5*4!,5*4*3!,5*4*3*2!,5*4*3*2*1==120
//factorial using functions.
#include <stdio.h>
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
return n*factorial(n-1);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
	return 0;
}
