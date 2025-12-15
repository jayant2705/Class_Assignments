#include<iostream>
using namespace std;

void Display(int i)
{
    if(i == 0)
    {
        return;
    }

    cout<< i << "\t";
    Display(i - 1);
}

int main()
{
    Display(5);
    return 0;
}
