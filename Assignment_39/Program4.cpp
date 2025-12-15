#include<iostream>
using namespace std;

void Display(char ch)
{
    if(ch > 'F')
    {
        return;
    }

    cout<< ch << "\t";
    Display(ch + 1);
}

int main()
{
    Display('A');
    return 0;
}
