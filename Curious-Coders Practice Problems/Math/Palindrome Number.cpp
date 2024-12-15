#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ori = n;
    long long ans = 0;
    while(n>0){
        int dig = n%10;
        ans = ans*10+dig;
        n/=10;
    }
    if(ori == ans){
        cout<<"Yes its a palindrome!!!";
    }
    else
    {
        cout<<"Not a palindrome!!!";
    }
    
    
    // system("pause");
    return 0;
}
