#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i){
                sum=sum+(n/i);
            }
        }
    }

    if(sum==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect numer";
    }
    
    return 0;
}
