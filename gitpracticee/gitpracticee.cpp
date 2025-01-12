// gitpracticee.cpp : 
// part 1 practicing


#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main()
{
    int a, b;
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;

    cout << "sum of " <<a<<" and "<< b <<" is : " << sum(a, b) << endl;
    cout << "subtraction of "<< a<<" and "<< b <<" is: " << sub(a, b) << endl;
    return 0;
    
}


