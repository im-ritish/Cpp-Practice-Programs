#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int sum=0;
    int originalnum=num;

    while(num>0)
    {
        int lastdigit = num%10;
        sum += pow(lastdigit,3);
        num=num/10;
    }
    if(sum==originalnum){
        cout<<"The number is Armstrong number"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
    return 0;
}