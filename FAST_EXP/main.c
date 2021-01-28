#include <stdio.h>

int fast_exp(int, int);

int main(int argc, char* argv)
{
	int number, exp;
	printf("Enter number and pow: \n");
	scanf("%d%d", &number, &exp);
	int result = fast_exp(number, exp);
	printf("Result: %d\n", result);
	return 0;
}

int fast_exp(int num, int exp)
{
	if(num == 0) return 0;
	if(num == 1) return 1;
	if(exp == 0) return 1;
	else if (exp%2 == 0) 
	{
		return fast_exp(num*num, exp/2);
	}
	else
	{
		return num * fast_exp(num, exp - 1);
	}
}
