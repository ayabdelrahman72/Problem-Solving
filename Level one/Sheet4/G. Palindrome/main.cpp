#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".
*/
int main()
{
    char S[1000];
    char temp[1000];
    int j=0;
    cin>>S;

   for(int i=strlen(S)-1;i>=0;i--){
     temp[j++]=S[i];
   }
   temp[j]='\0';
   if(strcmp(temp,S)==0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;


    return 0;
}
