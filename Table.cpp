#include <iostream>
using namespace std;
int table, length;
cout << "Enter the Table number ";
cin >> table;
cout << "Enter the Length of table ";
cin >> length;
for (int i = 1; i <= length; i++)
{
	int mul;
	mul = table * i;
	cout << table << " * " << length << " = " << mul << endl;

}
