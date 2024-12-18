#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){ // i*i<=n or sqrt(n)...but i*i<=n is efficient and optimized onw...!
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i ){
                cout<<n/i<<" ";
            }
        }
    }
    
    system("pause");
    return 0;
}
