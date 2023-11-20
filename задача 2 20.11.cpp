

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int day;
	cout << "Введите день недели по счету ";
		cin >> day;
	if ((day == 1) || (day == 2))
		cout << " Отдыхаю" << endl;
	else if ((day == 3) || (day == 4) || (day == 5) || (day == 6) || (day == 7))
		cout << " учусь" << endl;

}


