#include<iostream>
using namespace std;
int nod(int a, int b) {
	return b == 0 ? a : nod(b, a % b);
}
int main(){
	int N,v1, v2, v3;
	cin >> N;
	for (int i = 1; i <= N; i++) {
	cin>>v1 >> v2 >> v3;
		if (v3 % (nod(v1, v2)) == 0) {
			cout << "YES";
		}
		else cout << "NO";
	}
}