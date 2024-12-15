#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long cnt=0;
    while (n>0)
    {
        // int dig = n%10;
        cnt++;
        n/=10;
    }
    
    cout<<cnt;

    return 0;
}
