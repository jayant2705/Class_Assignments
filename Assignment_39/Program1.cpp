#include<iostream>
using namespace std;

void Display(int count)
{
    if(count == 0)
    {
        return;
    }

    cout <<"*\t";
    Display(count - 1);
}
int main()
{
    Display(5);
    return 0;
}