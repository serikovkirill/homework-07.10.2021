#include<iostream>
using namespace std;
int isprime(long long n) {
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 1;
	}
	return 0;
}
int main()
{
	long long int A, B, N; // число 1 простым не считаем.
	cin >> N;
	for(int i=1;i<=N;i++){
	cin >> A >> B;
	if (B == 1) {
		if (isprime(A) == 1) {
			cout << "YES";
		}
		else cout << "NO";
	}
	if (B == 2) {
		if (A % 2 == 0 && A >= 4)
		{
			cout << "YES";
		}
		else cout << "NO";
	}
	if (B >= 3) {
		if (A >= 2 * B)
		{
			cout << "YES";
		}
		else cout << "NO";
	}
	}
}
