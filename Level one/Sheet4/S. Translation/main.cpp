#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 char x[1001],s[1001];
 cin>>x>>s;
 if(strcmp(strrev(x),s)==0)
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;

    return 0;
}
