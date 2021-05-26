#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N],X;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cin>>X;
     for(int i=0;i<N;i++){
        if(A[i]==X){
            cout<<i<<endl;
           break;
        }
        if(i==N-1)
            cout<<"-1"<<endl;
    }


    return 0;
}
