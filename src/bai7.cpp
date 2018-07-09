//tim UCLN, bcnn
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	int t = a * b;
	while (a != b)
	{
		if (a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	cout << "\nUCLN:" << a;
	cout << "\nBCNN:" << t / a;
}