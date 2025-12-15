#include<iostream>
using namespace std;

void Display(int i)
{
    if(i > 5)
    {
        return;
    }

    cout<< i << "\t";
    Display(i + 1);
}

int main()
{
    Display(1);
    return 0;
}
