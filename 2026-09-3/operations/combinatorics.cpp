#include<iostream>

using namespace std;

int add(int A,int B);
int subtract(int A,int B);
int divide(int A,int B);



int main(){
    cout << "Input" << endl;
    char input[50];
    bool function;
    bool when=false;
    cin >> input;
    int number1;
    int number2;
    for(int i=0;i!='\0';i=add(i,1)){
        if (input[i] >= '0' && input[i] <= '9') {
            if(when==false){
              number1=add(multiply(number1,10),subtract(input[i],'0')); // Convert char to int and add
            }
            else{
                number2=add(multiply(number2,10),subtract(input[i],'0')); // Convert char to int and add
            }
        } 
        else {
            if(input[i]=='c' || input[i]=='C' ){
                  function=true;
            }
            else{
               function=false;
            }
            when=true;
        }
    }


}   
