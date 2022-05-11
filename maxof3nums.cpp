#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<"Num1 = "<<num1<<" is the greatest!"<<endl;
        }
        else{
            cout<<"Num3 = "<<num3<<" is the greatest!"<<endl;
        }
    }
    else{
        if(num2>num3){
            cout<<"Num2 = "<<num2<<" is the greatest!"<<endl;
        }
        else{
            cout<<"Num3 = "<<num3<<" is the greatest!"<<endl;
        }
    }
    return 0;
}