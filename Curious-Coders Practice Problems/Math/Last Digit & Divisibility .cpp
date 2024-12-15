#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        int dig = n%10;
        cout<<dig<<endl;
        n/=10;
    }
    
    system("pause");
    return 0;
}
