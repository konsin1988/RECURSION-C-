#include <stdio.h>
#include <time.h>

static int cache[50] = {0};

int fib(int n)
{
	if(n <= 1) return n;
	if(cache[n] == 0)
		cache[n] = fib(n-1) + fib(n-2);
	return cache[n];
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
		printf("fib(%d) =%10d\t time =\t %d mks\n", n, result, delta_ms);
	}
	return 0;
}
