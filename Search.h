#pragma once
#define MAXSIZE 20


void fib(void);

// 顺序查找，a为数组，n为数组的长度，key为要查找的关键字
//a[0]不存放元素
int Sequential_Search1(int *a, int n, int key);
int Sequential_Search2(int *a, int n, int key);


//有序查找，数组a中的元素已经从大到小排好序
int BinSearch(int *a, int n, int key);
int InterpolationSearch(int *a, int n, int key);
int Fibonacci_Search(int *a, int n, int key);