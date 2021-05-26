#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Given a string S consists of 1's and 0's. Print the positive difference between number of ones and number of zeroes.

Input
Only one line contains a string S (0 < |S| < 106)

It's guaranteed that S contains only 0's and 1's.

Output
Print the positive difference between 1's and 0's.
*/
int main()
{
    string s1;
    int counter1=0,counter0=0;
    cin>>s1;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]=='1')
            counter1+=1;
        else
            counter0+=1;

    }

    cout<<max(counter1,counter0)-min(counter1,counter0)<<endl;
    return 0;
}
