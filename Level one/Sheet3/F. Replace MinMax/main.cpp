#include <iostream>

using namespace std;
/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

*/
int main()
{
    int N,smallest,largest,pS,pL;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    if(i==0){
         smallest=largest=A[i];
         pL=pS=0;
    }else{
        if(A[i]>largest){
            largest=A[i];
            pL=i;
        }else
           {if(A[i]<smallest){
            smallest=A[i];
            pS=i;
           }
           }

    }}

    A[pS]=largest;
    A[pL]=smallest;
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }


    return 0;
}
