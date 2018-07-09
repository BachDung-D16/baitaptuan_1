#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ngay, thang, nam;
	// t la so bo test
	int t;
	cin >> t;
	while (t>0)
	{
		cout << "Ngay:";
		do
		{
			cin >> ngay;
		} while (ngay < 0 || ngay > 31);
		cout << "Thang:";
		do
		{
			cin >> thang;
		} while (thang < 0 || thang >12);
		cout << "Nam:";
		cin >> nam;
		if (nam % 100 == 0)
		{
			if (nam % 400 == 0)
			{
				cout << "Nam nhuan";
			}
			else
			{
				cout << "Khong hop le";
			}
		}
		else if (nam % 4 == 0)
		{
			cout << "Nam nhuan";
		}
		else
		{
			cout << "Khong hop le";
		}
		t--;
		cout << endl;
	}

	return 0;
}