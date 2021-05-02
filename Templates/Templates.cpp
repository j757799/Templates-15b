//Name: Jesse Picker
//Date: 5/2/2021
//Project Name: Templates 15b
//Project Description: Templated functions perform math on varying numeric data types.

//Libraries
#include<iostream>
#include<iomanip>
#include<string>

//Program Structure
using namespace std;

template <class R>
R half(R value)
{
	float mine2 = static_cast<float>(mine);
	cout << "\n\nHere is half the value of the int: " << (round((mine2 / 2))) << endl;
}

template <class R>
R half(R value1, R value2)
{

}

//void half(int);
//void half(float); //has 7 digits
//void half(double); //has 15


int main() 
{
	
	int myChoiceINT = 9;
	float myChoiceFLT = 3.14159;
	double myChoiceDBL = 3.14159265358979323846;

	half(myChoiceINT);

	

	cout << endl << endl;
	system("pause");
	return 0;
}

//void half(int mine)
//{
//	if ()
//	float mine2 = static_cast<float>(mine);
//	cout << "\n\nHere is half the value of the int: " << (round((mine2 / 2))) << endl;
//}