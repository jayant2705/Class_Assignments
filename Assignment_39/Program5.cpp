#include<iostream>
using namespace std;

void Display(char ch)
{
    if(ch > 'f')
    {
        return;
    }

    cout<< ch << "\t";
    Display(ch + 1);
}

int main()
{
    Display('a');
    return 0;
}
