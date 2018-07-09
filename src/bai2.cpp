#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[100]; 
		cout << "Nhap chuoi:";
	gets_s(s);
	int dem1 = 0, dem2 = 0;
	for (int i = 1; i <= strlen(s) - 1; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			dem1++;
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			dem2++;
		}
	}
	cout << "So ki tu hoa:" << dem1;
	cout << "\nSo ki tu thuong:" << dem2;
}
