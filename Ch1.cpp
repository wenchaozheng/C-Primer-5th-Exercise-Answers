#include<iostream>
using namespace std;


//1.3
int main()
{
	cout << "Hello, World" << endl;
	return 0;
}

//1.4
int main()
{
	int a, int b = 0;
	cin >> a;
	cin >> b;
	cout << "a*b=" << a * b << endl;
	return 0;
}

//1.6
//No

//1.8
//Yes;Yes;No;Yes,and print: /*

//1.9
int main()
{
	int i = 50;
	int sum = 0;
	while (i<=100)
	{
		sum += i;
		i++;
	}
	return 0;
}

//1.10
int main()
{
	int i = 10;
	while (i>=0)
	{
		cout << i << endl;
		i--;
	}
	return 0;
}

//1.11
int main()
{
	int a, int b = 0;
	cout << "input two int number" << endl;
	cin >> a >> b;
	if (a < b)
	{
		while (a <= b)
		{
			cout << a << endl;
			a++;
		}
	}
	else
	{
		while (a>=b)
		{
			cout << a << endl;
			a--;
		}
	}
	return 0;
}

//1.12
// sum = (-100) + (-99) + (-98) + ...+ 98 + 99 + 100
// sum == 0
