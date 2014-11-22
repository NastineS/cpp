#include <iostream>
#include <fstream>

using namespace std;

void isLuckyTest()
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
}

void task10()
{
	fstream input;
	fstream output;
	input.open("INPUT.TXT");
	output.open("OUTPUT.TXT", ios_base::trunc | ios_base::out);

	bool isFirst = true;

	int a, b, c, d;
	input >> a >> b >> c >> d;
	for (int x = -100; x <= 100; x++)

	{
		if (a*x*x*x + b*x*x + c*x + d == 0)
		{
			if (!isFirst)
				output << ' ' << x;
			else
			{ 
				output << x;
				isFirst = false;
			}
				
		}
	}


	input.close();
	output.close();
}




int main()
{
	task10();

	return 0;
}