#include<iostream>
using namespace std;
int rukopozhatiya(int p)
{
	int res = p * (p - 1);
	return res;
}
int main()
{
	int N,p,h;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> p;
		cout << rukopozhatiya(p);
	}
}