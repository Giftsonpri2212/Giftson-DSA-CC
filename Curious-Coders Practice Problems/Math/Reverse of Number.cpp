#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long rev = 0;
    while (n>0)
    {
        int d = n%10;
        rev = rev*10+d;
        n/=10;
    }
    cout<<rev;
    
    system("pause");
    return 0;
}
