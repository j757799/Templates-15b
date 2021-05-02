//Name: Jesse Picker
//Date: 5/2/2021
//Project Name: Templates 15b
//Project Description: Templated functions perform math on varying numeric data types

//Libraries
#include<iostream>
#include<iomanip>
#include<string>

//Program Structure
using namespace std;

template <class R>
int half(R value)
{
	float mine2 = static_cast<float>(value);
	return (round((mine2 / 2)));
}

template <class R1, class R2>
double half(R1 value1, R2 value2)
{
	return (value1 / 2);
}

int main() 
{
	
	int myChoiceINT = 9;
	float myChoiceFLT = 3.14159;
	double myChoiceDBL = 3.14159265358979323846;

	cout << "The result of halving (and rounding of course) my integer is: " << half(myChoiceINT);

	cout << fixed << showpoint << setprecision(5);
	cout << "\n\nThe result of halving my float to 5 decimal places is: " << half(myChoiceFLT, myChoiceDBL);

	cout << fixed << showpoint << setprecision(10);
	cout << "\n\nThe result of halving my double to 10 decimal places is: " << half(myChoiceDBL, myChoiceFLT);

	cout << endl << endl;
	system("pause");
	return 0;
}