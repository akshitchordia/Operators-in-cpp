// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1

#include <iostream>
#include <string>
using namespace std;

int main() {
    float a;
    cout << "Please enter a number : ";
    cin >> a;
    if (a > 0){
        cout <<"The number "<< a <<" is positive";
    }else if(a <0){
        cout << "The number "<< a << " is negative";
    }else{
        cout << "The number is zero. ";
    }
    
    return 0;
}

/*
output

Please enter a number : -84
The number -84 is negative

Please enter a number : 0
The number is zero. 

Please enter a number : 56768
The number 56768 is positive
*/
