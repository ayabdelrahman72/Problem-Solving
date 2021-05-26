#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    short T,N,flag=1;
    cin>>T;
    while(T--){
            cin>>N;
            if(N==1){
                flag=1;
            }
        for(short i=2;i<=sqrt(N);i++){
              if(N%i==0){
                flag=0;
              }
        }
        if(flag==1){
            cout<<"Prime"<<endl;
        }else
           cout<<"Not"<<endl;
          flag=1;
    }
    return 0;
}
