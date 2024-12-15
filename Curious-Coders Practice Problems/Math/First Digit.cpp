#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        int d = n%10;
        n/=10;
        if(n==0){
            cout<<d;
        }
    }
    
    system("pause");
    return 0;
}
