#pragma once
#define MAXSIZE 20


void fib(void);

// ˳����ң�aΪ���飬nΪ����ĳ��ȣ�keyΪҪ���ҵĹؼ���
//a[0]�����Ԫ��
int Sequential_Search1(int *a, int n, int key);
int Sequential_Search2(int *a, int n, int key);


//������ң�����a�е�Ԫ���Ѿ��Ӵ�С�ź���
int BinSearch(int *a, int n, int key);
int InterpolationSearch(int *a, int n, int key);
int Fibonacci_Search(int *a, int n, int key);