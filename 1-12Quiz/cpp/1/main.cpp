#include <iostream>
using namespace std;

int readNumber(){
    int i;
    cout<<"Enter an integer "<<endl;
    cin>>i;
   
    return i;
}

void writeAnswer(int a, int b){
    cout<<"The answer is "<<a+b<<endl;
}

int main(){
    int a = readNumber();
    int b = readNumber();
    writeAnswer(a, b);

    return 0;
}