#include<bits/stdc++.h>
using namespace std;

// int getBit(int num, int pos)
// {
//     return ((num & (1<<pos)) != 0);
// }

// int setBit(int num, int pos)
// {
//     return (num | (1<<pos));
// }

// int clearBit(int num, int pos)
// {
//     return (num & (~(1<<pos)));
// }

int updateBit(int num, int pos, int value)
{
    num = (num & ~(1<<pos));        //clear bit
    return (num | (value<<pos));    //set bit
}

int main()
{
    int num;
    cin >> num;
    int pos;
    cin >> pos;
    int value;
    cin >> value;

    cout << updateBit(num,pos,value) << endl;
    return 0;
}