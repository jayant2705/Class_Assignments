#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    if(i > iNo)
    {
        return;
    }

    cout <<i<< "\t";
    i++;
    Display(iNo);
}
int main()
{
    int iValue = 0;

    cout<<"Enter Number : ";
    cin >> iValue;

    Display(iValue);
    return 0;
}