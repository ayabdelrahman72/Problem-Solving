#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
*/
int main()
{
   char s[100],temp[26];

   short flag=0,counter=1;
   cin>>s;
   temp[0]=s[0];
   for(int i=1;i<strlen(s);i++){
        for(int j=0;j<counter;j++){

            if(s[i]==temp[j]){
                flag=1;
            }
        }

        if(flag==0){
            temp[counter++]=s[i];
        }else
        flag=0;

   }

  if(counter%2==0)
    cout<<"CHAT WITH HER!"<<endl;
   else
    cout<<"IGNORE HIM!"<<endl;


    return 0;
}
