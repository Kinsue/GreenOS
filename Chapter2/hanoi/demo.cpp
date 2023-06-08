#include <iostream>
using namespace std;

long long g(long long n);
long long f(long long n){
	if(n <=1) return 1;
	return f(n-1) + g(n - 2);
}

long long g(long long n){
	if ( n <= 1) return 1;
	return f(n + 1) + g(n -1);
}

int main(){
	long long n;
	cin >> n;
	cout << "f( " << n << " )   " << f(n) << endl;
	cin >> n;
	cout << "g( " << n << " )   " << g(n) << endl;
	return 0;
}
