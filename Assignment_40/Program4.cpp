#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'A';
    if(iNo <= 0)
    {
        return;
    }

    cout <<ch<<"\t";
    ch++;
    Display(iNo - 1);
}
int main()
{
    int iValue = 0;

    cout<<"Enter Number : ";
    cin >> iValue;

    Display(iValue);
    return 0;
}