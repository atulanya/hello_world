#include<iostream>
#include<cmath>

int permutation(int N,int R){
     if(N<R){
        cout << "Error: out of domain of return_value" << endl;
    }
    return multiply(combination(N,R),factorial(R));
}