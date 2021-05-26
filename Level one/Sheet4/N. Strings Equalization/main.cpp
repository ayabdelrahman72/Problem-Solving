#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   short q,flag=0,counter=0;
    string s,t;
   cin>>q;
   while(q--){
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
         for(int j=0;j<s.size();j++){
            if(s[i]==t[j]){
                flag=1;
                break;
            }
         }
       if(flag)
        break;

         }
     if(flag)
      cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
      flag=0;

   }


    return 0;
}
