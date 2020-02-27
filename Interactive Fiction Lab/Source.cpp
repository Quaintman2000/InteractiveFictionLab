#include  <iostream>
#include <string>

using namespace  std;

int AddTwoNumbers(int firstNum, int secondNum)
{
	//returns the sum of firstNum and secondNum
	return  firstNum + secondNum;
}
int main()
{
	cout << "\n\n\t\t *** Welcome to my Calc ***\n\n";
	//prints out the sum of 12 and 13
	cout << AddTwoNumbers(12, 13)<<"\n";
	return 0;
}