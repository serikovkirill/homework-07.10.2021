#include<iostream>
using namespace std;
double min_vysota(double S,double a)
{
	double h = (2 * S) / a;
	return h;
}
int main()
{
	double S, a, h;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> a >> S;
		cout << min_vysota(S, a);
	}
}	