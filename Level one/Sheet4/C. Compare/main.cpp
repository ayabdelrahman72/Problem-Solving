#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.
*/
int main()
{
   char s1[21],s2[21];
   cin>>s1>>s2;
   if(strcmp(s1,s2)==-1)
      cout<<s1<<endl;
   else
    cout<<s2<<endl;

    return 0;
}
