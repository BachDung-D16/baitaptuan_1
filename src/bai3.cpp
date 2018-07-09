#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	// x la so km di duoc
	//t la so tien phai tra
	int x, t;
	cout << "Nhap x:";
	cin >> x;
	if (x<1000)
	{
		cout << 10000;
	}
	else if (1200 <= x && x <= 30000)
	{
		t = 10000 + (float)((x - 1000) * 1500) / 200;
		cout << t;
	}
	else if (x>30000)
	{
		t = 10000 + (29000 * 1500) / 200 + (x - 30000) * 8000;
		cout << t;
	}
}