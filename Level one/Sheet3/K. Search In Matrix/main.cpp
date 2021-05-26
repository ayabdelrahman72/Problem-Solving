#include <iostream>

using namespace std;
/*
Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

Input
First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

Last line contains a number X (0 ≤ X ≤ 105) described above.

Output
Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".
*/
int main()
{
    int N,M,X;
    short flag=0;
    cin>>N>>M;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
   cin>>X;
     for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(X==A[i][j]){
                flag=1;
                i=N;
                break;
            }


        }


    }
    if(flag==1)
        cout<<"will not take number"<<endl;
    else
        cout<<"will take number"<<endl;

    return 0;
}
