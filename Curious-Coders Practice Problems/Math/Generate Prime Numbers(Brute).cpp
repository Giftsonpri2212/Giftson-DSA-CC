#include <iostream>
using namespace std;


bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    
    // system("pause");
    return 0;
}