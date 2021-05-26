#include <iostream>

using namespace std;

int main()
{
    /*Given a number N. Print a left angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.*/
  short N;
  cin>>N;
  for(int i=1;i<=N;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
  }
    return 0;
}
