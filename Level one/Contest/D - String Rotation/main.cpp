#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Problem Statement
You are given string
S
 and
T
 consisting of lowercase English letters.

Determine if
S
 equals
T
 after rotation.

That is, determine if
S
 equals
T
 after the following operation is performed some number of times:

Operation: Let
S
=
S
1
S
2
.
.
.
S
|
S
|
. Change
S
 to
S
|
S
|
S
1
S
2
.
.
.
S
|
S
|
−
1
.

Here,
|
X
|
 denotes the length of the string
X
.

Constraints
2
≤
|
S
|
≤
100
|
S
|
=
|
T
|
S
 and
T
 consist of lowercase English letters.
Input
Input is given from Standard Input in the following format:

S

T

Output
If
S
 equals
T
 after rotation, print Yes; if it does not, print No.

Sample Input 1
kyoto
tokyo
Sample Output 1
Yes
In the first operation, kyoto becomes okyot.
In the second operation, okyot becomes tokyo.
Sample Input 2
abc
arc
Sample Output 2
No
abc does not equal arc after any number of operations.

Sample Input 3
aaaaaaaaaaaaaaab
aaaaaaaaaaaaaaab
Sample Output 3
Yes

*/
int main()
{
   char S[100];
   char T[100];
   char temp;
   short flag=0;
   cin>>S>>T;
   if(strcmp(S,T)==0)
        flag=1;
   else{

   for(int i=0;i<strlen(S);i++){
      temp=S[strlen(S)-1];
       for(int j=strlen(S)-1;j>0;j--){
        S[j]=S[j-1];
       }
       S[0]=temp;
       if(strcmp(S,T)==0){
           flag=1;
           break;
       }
   }
   }
   if(flag==1)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
    return 0;
}
