#include <iostream>
using namespace std;

int readNumber(){
    int i;
    cout<<"Enter an integer "<<endl;
    cin>>i;
   
    return i;
}

void writeAnswer(int a, int b){
  cout<<"The Answer is "<<a+b<<endl;
}