#include<iostream>
using namespace std;
int main()
{
	int  d, m, y, kolvo_vis;
	cin >> d >> m >> y;
	kolvo_vis = 7;
	cout << (2021 - y) * 365 + kolvo_vis + 21; //01.10.2021
}