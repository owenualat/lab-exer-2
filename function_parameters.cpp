#include <iostream>
using namespace std;
 
// function declaration
int factorial(int num1);
 
int main () {
   // local variable declaration:
   int a,ret;
   cout << "Enter a number > ";
   cin >> a;
 
   // calling a function to get max value.
   ret = factorial(a);
   cout << "The factorial of " << a << " is " << ret << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int factorial(int num1) {
	int result,temp=1;
	for (int i = num1; i >= 1; i--)
	{
		cout << i << endl;
		temp=temp*i;
	}
	result = temp;
   return result; 
}
