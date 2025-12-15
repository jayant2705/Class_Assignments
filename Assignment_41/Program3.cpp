#include<iostream>
using namespace std;

int Strlen(char *str)
{ 
    if(*str == '\0')
    {
        return 0;
    }
    
      return 1+ Strlen(str + 1);
     
}
int main()
{
    int iRet = 0;
    char arr[20];

    cout<<"Enter String : ";
    cin>>arr;

    iRet = Strlen(arr);

    cout<<iRet;
    return 0;
}