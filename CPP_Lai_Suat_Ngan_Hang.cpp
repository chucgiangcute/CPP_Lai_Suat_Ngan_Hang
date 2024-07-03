// CPP_Lai_Suat_Ngan_Hang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double tiengui, laisuat, thoihan;
	double tienlai = 0;
	cout << "Nhap so tien gui ban dau, lai suat va thoi han :" << endl;
	cout << "Nhap tien gui ban dau (VND):"<<" ";
	cin >> tiengui;
	cout << "Nhap lai suat (%):"<<" ";
	cin >> laisuat;
	cout << "Nhap so nam:"<<" ";
	cin >> thoihan;

	int tongtien = tiengui;

	// Chuy?n ??i lãi su?t sang %
	laisuat /= 100;

	tienlai = (tiengui * laisuat * thoihan);

	for (int i = 1; i <= thoihan; ++i) {
		tongtien += tongtien * laisuat;
	}

	cout << "\nTien gui ban dau = " << tiengui << " VND" << endl;
	cout << "Lai suat = " << laisuat * 100 << "%" << endl;
	cout << "Thoi han = " << thoihan << " nam" << endl;
	cout << "So tien lai = " << tienlai << " VND" << endl;
	cout << "So tien sau " << thoihan << " nam voi lai suat cong don = " << tongtien << " VND" << endl;

	return 0;
}