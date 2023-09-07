#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Point
{
private:
	int num1;
	int denum1;

public:

	void Init()
	{
		num1 = rand() % 20;
		denum1 = rand() % 10;
	}

	void Init(int _num1, int _denum1)
	{
		num1 = _num1;
		denum1 = _denum1;
	}


	Point Sum(Point b)
	{
		Point addition;
		addition.num1 = num1 + b.num1;
		addition.denum1 = denum1 + b.denum1;
		return addition;
	}

	Point Sub(Point b)
	{
		Point subtraction;
		subtraction.num1 = num1 - b.num1;
		subtraction.denum1 = denum1 - b.denum1;
		return subtraction;
	}

	Point Mul(Point b)
	{
		Point multiplication;
		multiplication.num1 = num1 * b.num1;
		multiplication.denum1 = denum1 * b.denum1;
		return multiplication;
	}

	Point Div(Point b)
	{
		Point division;
		division.num1 = num1 / b.num1;
		division.denum1 = denum1 / b.denum1;
		return division;
	}

	void Print()
	{
		cout << num1 << "/" << denum1 << endl;
	}
};

int main()
{
	int numer1, denum1, numer2, denum2;
	cout << "Enter numer 1: ";
	cin >> numer1;
	cout << "Enter denum 1: ";
	cin >> denum1;
	cout << "Enter numer 2: ";
	cin >> numer2;
	cout << "Enter denum 2: ";
	cin >> denum2;

	cout << "\n";

	Point a;
	a.Init(numer1, denum1);

	Point b;
	b.Init(numer2, denum2);

	int choice;
	cout << "1. addition\n";
	cout << "2. subtraction\n";
	cout << "3. multiplication\n";
	cout << "4. division\n";
	cout << "Choose option: ";
	cin >> choice;

	cout << "\n";

	switch (choice)
	{
	case 1:
		Point addition = a.Sum(b);
		addition.Print();
		break;
	case 2:
		Point subtraction = a.Sub(b);
		subtraction.Print();
		break;
	case 3:
		Point multiplication = a.Mul(b);
		multiplication.Print();
		break;
	case 4:
		Point sN = a.Div(b);
		sN.Print();
		break;
	default:
		break;
	}

}