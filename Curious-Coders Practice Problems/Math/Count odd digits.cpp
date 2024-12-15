#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    while (n>0)
    {
        int d = n%10;
        if(d%2!=0){
            cnt++;
        }
        n/=10;
    }
    cout<<cnt;
    
    system("pause");
    return 0;
}
