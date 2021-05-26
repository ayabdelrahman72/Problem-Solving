#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1001];
    char result[3];
    short len,t;
    cin>>t;
    while(t--){
    cin>>s;
    if(strlen(s)>10){
    result[0]=s[0];
    len=strlen(s)-2;
    result[1]=s[strlen(s)-1];
    cout<<result[0]<<len<<result[1]<<endl;
    }else
      cout<<s<<endl;
    }


    return 0;
}
