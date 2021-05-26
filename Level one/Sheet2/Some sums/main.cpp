#include <iostream>

using namespace std;

int main()
{
    int N,temp,s=0,sum=0,a,b;
    cin>>N>>a>>b;
    for(int i=1;i<=N;i++){
           s=0; temp=i;
        while(temp){
            s+=temp%10;
            temp/=10;
        }
        if(s>=a && s<=b){
            sum+=i;
            cout<<i<<endl;
        }
    }
    cout<<sum;
    return 0;
}
