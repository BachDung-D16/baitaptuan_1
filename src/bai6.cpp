#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
	char s[100];
	cout << "Nhap chuoi:";
	gets_s(s);
	int t = strlen(s);
	while (s[0] == ' ')
	{
		strcpy_s(&s[0], 100, &s[1]);
	}
	while (s[t - 1] == ' ')
	{
		s[t - 1] = NULL;
	}
	for (int i = 1; i <= t - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			strcpy_s(&s[i], 100, &s[i + 1]);
			i--;
		}
	}
	cout << s;
}