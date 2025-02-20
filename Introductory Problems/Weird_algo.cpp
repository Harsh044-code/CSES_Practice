#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    while(n>1){   // While(n>=1)  here the the loop will run indefinitely when n==1 , n>1 instead of n>=1
        cout<<n<<" ";
        if(n%2!=0){
            n=(n*3)+1;
        }
        else{
            n=n/2; //n>>1
        }
    }

    cout<<"1";

    return 0;
}