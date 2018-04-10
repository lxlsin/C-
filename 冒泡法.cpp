// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>
#include<iostream>
using namespace std;


void bubble_sort(int a[], int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = len - 2; j >= i; j--)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}



void bubble_sort3(int a[], int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = len - 1; j >i; j--)
		{
			if (a[j] < a[j-1])
			{
				temp = a[j-1];
				a[j-1] = a[j ];
				a[j ] = temp;
			}
		}
	}
}

void bubble_sort1(int a[], int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i-1; j++)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}





void print(int a[],int len)
{
	for (int i =0; i< len;i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	int a[] = { 98,76,109,34,67,190,80,12,14,89,1 };
	int len = sizeof(a) / sizeof(a[0]);
	cout << len << endl;

	print(a, len);

	bubble_sort3(a, len);
	print(a, len);



	 
    return 0;
}

