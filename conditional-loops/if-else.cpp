#include<iostream>
using namespace std;

int main(){

  int a;
  int b;

  cin >> a;
  cin >> b;

  if( a > b){
    cout << a << " is Grater Than " << b << endl;
  } else if ( b > a){
    cout << b << " is Grater Than " << a << endl;
  } else if ( a == b) {
    cout << "Both " << a << " & " << b << " are equal" << endl;
  }

  return 0;
}