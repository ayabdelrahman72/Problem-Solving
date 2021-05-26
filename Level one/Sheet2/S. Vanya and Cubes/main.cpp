#include <iostream>
/*
Vanya got n cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of 1 cube, the second level must consist of 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. Thus, the i-th level of the pyramid must have 1 + 2 + ... + (i - 1) + i cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

Input
The first line contains integer n (1 ≤ n ≤ 104) — the number of cubes given to Vanya.

Output
Print the maximum possible height of the pyramid in the single line.
*/
using namespace std;

int main()
{
    unsigned short n,j=0,total=0;
    cin>>n;


           while(n>0){
                 j+=1;
                 total+=j;
            if(n>=total){
             n-=total;
            }else
               {n=0;
                j-=1;
               }
           }

        cout<<j<<endl;

    return 0;
}
