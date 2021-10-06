#include<iostream>
using namespace std;
bool incircle(int x, int y,int r)
{
	if (x * x + y * y <= r * r)
	{
		return 1;
	}
	else return 0;

}
int main()
{
	int N,k=0,r,t,x,y;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> r >> t;
		for (int j = 1; j <= t; j++)
		{
			cin >> x >> y;
			if (incircle(x, y, r) == 1)
			{
				k++;
		}
		}
		cout << k;
		k = 0;
	}
}