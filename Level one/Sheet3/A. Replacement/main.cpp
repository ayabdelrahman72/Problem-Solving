#include <iostream>

using namespace std;
/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.
*/
int main()
{
    short N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]>0)
            A[i]=1;
        else{
            if(A[i]<0)
                A[i]=2;
            else
                A[i]=0;
        }
    }
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
