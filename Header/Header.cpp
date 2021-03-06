//Header and Source Code
//CSC215
//Samael Newgate

#include "stdafx.h"
#include "Numberz.h"
#include "ioStream"

//Standard namespace
using namespace std;

//Variables
double NumberOne;
double NumberTwo;


//Main function
int main()
{
	//Introduction and explanation
	cout << "Welcome to Numberz" << endl;
	cout << "\nNumberz helps you find the division, addition, and multiplication of two numbers." << endl;
	
	//User input for NumberOne
	cout << "\n***********************" << endl;
	cout << "Enter first number: " << endl;
	cin >> NumberOne;
	cout << "***********************" << endl;
	
	//User input for NumberTwo
	cout << "\n***********************" << endl;
	cout << "Enter second number: " << endl;
	cin >> NumberTwo;
	cout << "***********************" << endl;

	//Shows the two numbers added
	cout << "\n----------------------------------" << endl;
	cout << "Your numbers ADDED:\n";
	cout << NumberOne << "+" << NumberTwo << "= " << NumberAdd(NumberOne, NumberTwo);
	
	//Shows the two numbers multiplied
	cout << "\n----------------------------------" << endl;
	cout << "Your numbers MULTIPLIED:\n";
	cout << NumberOne << "*" << NumberTwo << "= " << NumberMultiply(NumberOne, NumberTwo);
	cout << "\n----------------------------------" << endl;

	//Shows the two numbers divided
	cout << "\n----------------------------------" << endl;
	cout << "Your numbers DIVIDED:\n";
	cout << NumberOne << "/" << NumberTwo << "= " << NumberDivide(NumberOne, NumberTwo);
	cout << "\n----------------------------------\n" << endl;

	//Stops the program from closing automatically
	system("pause");

	return 0;
}

