#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	cout << "~~ Calculator App ~~\n\n";
	cout << "10 + 5 = " << Add(10, 5) << endl;
	return 0;
}