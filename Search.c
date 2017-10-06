#include "Search.h"

//定义全局变量
int F[MAXSIZE] = { 0, 1, 1 };

int Sequential_Search1(int *a, int n, int key)
{
	int i;
	for (i = 1; i <= n; ++i)
	{

		if (key == a[i])
			return i;
	}
	return 0;
}

int Sequential_Search2(int *a, int n, int key)
{
	int i = n + 1;
	a[0] = key;
	while (a[--i] != key)
		;
	return i;
}

int BinSearch(int *a, int n, int key)
{
	int low = 1, high = n, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == a[mid])
			return mid;
		else if (key > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;
}

int InterpolationSearch(int *a, int n, int key)
{
	int low = 1, high = n, mid;
	while (low <= high)
	{
		if (high == low)
			mid = high;
		else
			mid = low + (key - a[low]) / (a[high] - a[low]) * (high - low);

		if (key == a[mid])
			return mid;
		else if (key > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;
}

void fib(void)
{
	int i;
	for (i = 3; i <= MAXSIZE; ++i)
		F[i] = F[i - 1] + F[i - 2];
}

int Fibonacci_Search(int *a, int n, int key)
{
	int low = 1, high = n, mid;
	int k = 0, i;
	fib();
	while (n > F[++k] - 1)
		;
	for (i = n; i <= F[k] - 1; ++i)
		a[i] = a[n];

	while (low <= high)
	{
		mid = low + F[k - 1] - 1;
		if (key < a[mid])
		{
			high = mid - 1;
			--k;
		}
		else if (key > a[mid])
		{
			low = mid + 1;
			k -= 2;
		}
		else
		{
			if (mid <= n)
				return mid;
			else
				return n;

		}

	}
	return 0;
}