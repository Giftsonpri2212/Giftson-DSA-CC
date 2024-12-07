#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>=90 && n<=100)
    {
        cout<<"A";
    }
    else if(n>=80 && n<90)
    {
        cout<<"B";
    }
    else if(n>=60 && n<80)
    {
        cout<<"C";
    }
    else if(n>=35 && n<60)
    {
        cout<<"D";
    }
    else{
        cout<<"Fail";
    }
}