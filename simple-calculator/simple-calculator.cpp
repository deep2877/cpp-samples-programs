#include<iostream>
using namespace std;

// Perform Addition
int doSum(int a, int b){
  return (a + b);
}

// Perform Subtraction
int doDif(int a, int b)
{
  return (a - b);
}

// Perform Multiplication
int doMul(int a, int b)
{
  return (a * b);
}

// Perform Division
int doDiv(int a, int b)
{
  return (a / b);
}

int main(){
  int sum = 0;
  int dif = 0;
  int multi = 0;
  int divi =0;

  int evalSum = doSum(5,20);
  cout << "Sum of Value 5 + 20 :" << evalSum << endl;

  int evalDif = doDif(5,20);
  cout << "Sum of Value 5 + 20 :" << evalDif << endl;

  int evalMulti = doMul(5,20);
  cout << "Sum of Value 5 + 20 :" << evalMulti << endl;

  int evalDiv = doDiv(5,20);
  cout << "Sum of Value 5 + 20 :" << evalDiv << endl;

  return 0;
}