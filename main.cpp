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
    cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
  }
  else if(operation == 2){
    cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
  }
  else if(operation == 3){
    cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
  }
  else if(operation == 4){
    cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
  }
  else if(operation == 5){
    cout << num1 << "^2" << " and " << num2 << "^2" << " = " << num1*num1 << " and " << num2*num2 << endl;
  }
  else if(operation == 6){
    cout << num1 << "^3" << " and " << num2 << "^3" << " = " << num1*num1*num1 << " and " << num2*num2*num2 << endl;
  }
}
  
