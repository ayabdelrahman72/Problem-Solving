#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Given a string S. Print the string after replacing every capital character in S with its respective small character and Vice Versa.

Input
Only one line contains a string S (1 ≤ S ≤ 50).

Output
Print the string after the replacement
*/
int main()
{
    char S[50];
    cin>>S;
    for(int i=0;i<strlen(S);i++){
        if(islower(S[i]))
            S[i]-=32;
        else
            S[i]+=32;
    }
    cout<<S<<endl;

    return 0;
}
