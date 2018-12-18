#include <iostream>
using namespace std;
 
// function declaration
int max(int num1, int num2);
 
int main () {
   int a,b,result;
   cout << "Enter first # > ";
   cin >> a;
   cout << "Enter second # > ";
   cin >> b;

 
   // calling a function to get max value.
   result = max(a, b);
   cout << "The greatest value between " << a << " and " << b << " is " << result << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int ans;
 
   if (num1 > num2)
      ans = num1;
   else
      ans = num2;
 
   return ans; 
}
