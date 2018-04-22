//http://www.learncpp.com/cpp-tutorial/14-a-first-look-at-functions/

#include <iostream>
using namespace std;

int getValueFromUser(){
    cout<<"Enter an integer "<<endl;
    int a; 
    cin>>a;
    return a;
}

int main(){
    int x = getValueFromUser();
    int y = getValueFromUser();
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;

    return 0;
}