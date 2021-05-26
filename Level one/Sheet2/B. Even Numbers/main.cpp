#include <iostream>

using namespace std;

int main()
{
    /*
    Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.


     */
      short N,flag=1;
    cin>>N;
    for(int i=1;i<=N;i++){
            if(i%2==0){
        cout<<i<<endl;
        flag=0;
            }
    }
    if(flag){
        cout<<"-1"<<endl;
    }

    return 0;
}
