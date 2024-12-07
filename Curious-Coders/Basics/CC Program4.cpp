#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    switch(n){
        case(29):
            cout<<"Small";
            break;
        
        case(30):
            cout<<"Medium";
            break;
        
        case(38):
            cout<<"Large";
            break;
        
        case(42):
            cout<<"XLarge";
            break;
        default:
            cout<<"Invalid";
            break;
    }
}