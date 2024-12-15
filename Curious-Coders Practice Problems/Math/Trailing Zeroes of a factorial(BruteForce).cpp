#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"The Factorial of the given number is: "<<fact<<endl;
    int cnt = 0;
    while (fact>0){
        int d = fact%10;
        if(d==0){
            cnt++;
        }
        fact/=10;
    }
    cout<<"Trailing Zeroes are: "<<cnt;
    
    // system("pause");
    return 0;
}
