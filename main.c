#include "Search.h"
#include <stdio.h>


main(void)
{
	int a[2] = \
	{ 0,1};

	printf("%d\n", Sequential_Search1(a, 1, 1));
	printf("%d\n", Sequential_Search2(a, 1, 1));
	printf("%d\n", BinSearch(a, 1, 1));
	printf("%d\n", InterpolationSearch(a, 1, 1));
	printf("%d\n", Fibonacci_Search(a, 1, 1));
	system("pause");
	return 0;
}