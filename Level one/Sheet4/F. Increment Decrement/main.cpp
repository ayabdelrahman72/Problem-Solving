#include <iostream>

using namespace std;
/*
Given a string S. Print the maximum value while doing the following operations:

At the beginning you have a value of 0
If the character of index ith is 'I' then increments the value you have by 1
If the character of index ith is 'D' then decrements the value you have by 1
Input
Only one line contains a string S (1 ≤ |S| ≤ 105)

It's guaranteed that S contains only 'I' and 'D' characters.

Output
Print the answer required above.
*/
int main()
{
   string s1;
    int counter=0,Max=0;
   cin>>s1;

   for(int i=0;s1[i]!='\0';i++){
    if(s1[i]=='I'){
        counter+=1;
        if(Max<counter)
            Max=counter;}
    else
        counter-=1;
   }
   cout<<Max<<endl;
    return 0;
}
