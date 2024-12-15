#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    long long p = pow(a,b);
    cout<<"Power value is: "<<p<<endl;
    int cnt = 1;
    while(p>0){
        int d = p%10;
        if(cnt == k){
            cout<<d;
        }
        cnt++;
        p/=10;
    }

    
    system("pause");
    return 0;
}
