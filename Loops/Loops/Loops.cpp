// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int number1;
	int result;
	int factorial=1;
	int oddNumber = 0;
	int evenNumber = 0;
	cout.setf(ios::left);

	//cout << "Enter the number whose factorial you want to find" << endl;
	//cin >> number1;

	//while (number1 >= 2)
	//{
	//	factorial *= number1;
	//	number1--;
	//}
	//cout << factorial;

	cout << "enter a number" << endl;
	cin >> number1;
	while (number1>=0)
	{
		if (number1 %2 == 0)
		{
			evenNumber = evenNumber+number1;
			number1 = number1-1;
			
		}
	
		else
		{
			oddNumber = oddNumber + number1;
			number1= number1-1;
			
		}
	}
	cout << "count of the even numbers sum : " << evenNumber << endl;
	cout <<"count of the odd numbers sum : " << oddNumber << endl;

	//the multiplication table
	for (int i =1; i <= 10; i++)
	{
		//cout << setw(9)<<left<<i<<'|';
		for (int j = 1; j <= 10; j++)
		{
			cout<< i << "x" << j << ":" << i * j<<"---";
			
		}
	
		cout << endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//Döngülerde break döngüyü kýrar continue ise altýndaki iþlemlere devam etmeden döngünün içine tekrardan girer.(döngünün þarýný sorgular--Bunlar dongülerde geçerli þeyler)