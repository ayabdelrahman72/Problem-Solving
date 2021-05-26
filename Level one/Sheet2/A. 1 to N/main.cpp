#include <iostream>

using namespace std;

int main()
{
    /*
    Given a number N. Print numbers from 1 to N in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

    */
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<i<<endl;
    }
    return 0;
}
