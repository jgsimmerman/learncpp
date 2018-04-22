#include <iostream>
using namespace std;

void printValues(int x, int y){
  cout<<x<<endl;
  cout<<y<<endl;
}

int add(int x, int y){
  return x+y;
}

int multiply(int z, int w){
  return z*w;
}

int doubleNumber(int x){
  return x+x;
}

int main(){
  printValues(6,7);
  
  cout<<add(4,5)<<endl;
  
  cout<<multiply(2,3)<<endl;
  
  cout<<add(1+2, 3*4)<<endl;
  
  int a = 5;
  cout<<add(a,a)<<endl;
  
  cout<<add(1, multiply(2,3))<<endl;
  
  cout<<add(1, add(2,3))<<endl;
  
  cout<<doubleNumber(5)<<endl;
  
  return 0;
}