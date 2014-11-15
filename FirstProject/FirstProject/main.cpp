#include <iostream>

using namespace std;

int main()
{
	int n;
	bool isLucky = false;;

	cin >> n;

	int a = 0, b = 0;
	a = (n % 100) / 10 + n % 10;
	n = n / 100;
	b = (n % 100) / 10 + n % 10;;

	isLucky = a == b;



	cout << isLucky;

	return 0;
}