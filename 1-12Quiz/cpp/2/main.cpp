#include <iostream>
using namespace std;

int readNumber();
void writeAnswer(int, int);


int main(){
    int a = readNumber();
    int b = readNumber();
    writeAnswer(a, b);

    return 0;
}