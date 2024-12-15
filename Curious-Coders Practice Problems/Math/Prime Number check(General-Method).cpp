#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag = 1;
    // if(n==2){
    //     cout<<"Prime Number";
        
    // }
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime Number";
    }
    
    // system("pause");
    return 0;
}
