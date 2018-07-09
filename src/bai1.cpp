#include<iostream>
#include<conio.h>
using namespace std;
int a[100];
void In(int n)
{
	int i = 0, t;
	while (n>0)
	{
		int t = n % 10;
		a[i] = t;
		i++;
		n /= 10;
	}
	for (int i = 0; i<3; i++)
	{
		for (int j = i + 1; j <= 3; j++)
		{
			if (a[i]<a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		cout << a[i];
	}
}
int main()
{
	int n, t;
	cin >> t;
	while (t>0)
	{
		cout << "\nNhap n:";
		do
		{
			cin >> n;
		} while (n<0 || n>999);
		In(n);
		t--;
	}

}