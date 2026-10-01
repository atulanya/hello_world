#include<iostream>
#include<cmath>
int factorial(int number);
int combination(int N,int R){
    if(N<R){
        cout << "Error: out of domain of return_value" << endl;
    }
    return divide(factorial(N),multiply(factorial(subtract(N,R)),factorial(R)));
}

