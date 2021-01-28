#include <stdio.h>
#include <time.h>



int fib(int n)
{
	if(n <= 1) return n;
	else return fib(n-1) + fib(n-2);
}

int main(int argc, char* argv[])
{
	int N;
	printf("Enter number of fibonachi numbers: ");
	scanf("%d", &N);
	printf("\n");

	for (int n=1; n < N; ++n)
	{
		clock_t time1 = clock();
		int result = fib(n);
		clock_t time2 = clock();
		int delta_ms = (time2 - time1) * 1000000 / CLOCKS_PER_SEC;
		printf("fib(%2d) = %6d\t time = %6d mks\n", n, result, delta_ms);
	}
	return 0;
}
