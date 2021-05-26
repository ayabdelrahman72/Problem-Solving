#include <iostream>

using namespace std;
/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).
*/
int main()
{
    int N,position;
    cin>>N;
    int A[N],smallest;
    cin>>A[0];
    smallest=A[0];
    position=1;
    for(int i=1;i<N;i++){
        cin>>A[i];
       if(smallest>A[i]){
        smallest=A[i];
        position=i+1;
       }
    }
    cout<<smallest<<" "<<position<<endl;

    return 0;
}
