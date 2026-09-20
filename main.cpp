#include <bits/stdc++.h>
using namespace std;
int main(){
  int num1;
  int num2;
  int operation;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for squaring\nEnter 6 for cubing: ";
  cin >> operation;
  if(operation == 1){
    cout << a << "+" << b << "=" << a+b << endl;
  }
  else if(operation == 2){
    cout << a << "-" << b << "=" << a-b << endl;
  }
  else if(operation == 3){
    cout << a << " * " << b << " = " << a*b << endl;
  }
  else if(operation == 4){
    cout << a << " / " << b << " = " << a/b << endl;
  }
  else if(operation == 5){
    cout << a << "^2" << " and " << b << "^2" << " = " << a*a << " and " << b*b << endl;
  }
  else if(operation == 6){
    cout << a << "^3" << " and " << b << "^3" << " = " << a*a*a << " and " << b*b*b << endl;
  }
}
  
