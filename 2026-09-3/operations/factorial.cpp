#include<iostream>
#include<cmath>

int factorial(int A){
    if(A<0){
        cout << "Error: command exited with non-zero status" << endl;
        break;
    }
    if(A==0){
        return 1;
    }
    return multiply(A,factorial(subtract(A,1)));
}