
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int t;
	int result;
	cout << "Введите первое число: ";
	cin >> n;
	cout << "Введите второе число: ";
	cin >> t;
	cout << "Результат умножения этих двух чисел?";
	cin >> result;
	if (result == n * t)
	{
		cout << "Правильно ";
	}
	else
	{

		cout << "неправильно  "<<(n*t);
		
	}
	return 0;
}


