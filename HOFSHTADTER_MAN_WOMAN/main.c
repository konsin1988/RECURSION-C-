#include <stdio.h>

int F(int n);
int M(int m);

int main(int argc, char* argv[])
{
	int n;
	printf("Enter the element number of sequence: ");
	scanf("%d", &n);
	printf("Female number: %d; Male number: %d\n", F(n), M(n));
	return 0;
}

int F(int n)
{
	if(n == 0) return 1;
	return n - M(F(n-1));
}

int M(int n)
{
	if(n == 0) return 0;
	return n - F(M(n-1));
}
