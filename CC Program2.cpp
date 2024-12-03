#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int sum = n1+n2+n3;

    if(sum == 180)
    {
        cout<<"Triangle can be formed"<<endl;
    }else{
        cout<<"Triangle cannot be formed"<<endl;
    }
}