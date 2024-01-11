#include<iostream>
#include<array>
#include<vector>
using namespace std;
void print(string arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void print(array<string, 7>day)
{
	print(day.data(), day.size());
	
}
void print(vector<string>sample)
{
	print(sample.data(), sample.size());
	
}
int main()
{
	char choice;
	cout << "Following are the sets to print the same string of day name  ";
	cout << "\n1: By simple string array \n2: By standard string array \n3:By a vector string\n";
	cin >> choice;
	string day1[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	array< string, 7 >day2 = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	vector < string >day3 = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	switch (choice)
	{
	case'1':
		print(day1, 7);
		break;
	case'2':
		print(day2);
		break;
	case'3':
		print(day3);
		break;
	}

	return 0;
}



