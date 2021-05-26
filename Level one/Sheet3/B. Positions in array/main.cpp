#include <iostream>

using namespace std;
/*
Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

it's guaranteed that there is at least one number in array less than or equal to 10.

Output
For each number in the array that is equal to or less than 10 print a single line contains "A[i] = X", where i is the position in the array and X is the number stored in the position.
*/
int main()
{
    short N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]<=10)
            cout<<"A["<<i<<"] = "<<A[i]<<endl;

    }
    return 0;
}
