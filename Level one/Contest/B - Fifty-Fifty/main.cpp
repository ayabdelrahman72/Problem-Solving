#include <iostream>

using namespace std;
/*
Problem Statement
You are given a
4
-character string
S
 consisting of uppercase English letters. Determine if
S
 consists of exactly two kinds of characters which both appear twice in
S
.

Constraints
The length of
S
 is
4
.
S
 consists of uppercase English letters.
Input
Input is given from Standard Input in the following format:

S

Output
If
S
 consists of exactly two kinds of characters which both appear twice in
S
, print Yes; otherwise, print No.

Sample Input 1
ASSA
Sample Output 1
Yes
S
 consists of A and S which both appear twice in
S
.

Sample Input 2
STOP
Sample Output 2
No
Sample Input 3
FFEE
Sample Output 3
Yes
Sample Input 4
FREE
Sample Output 4
No


*/
int main()
{
    char s[4];
   char temp[2]={'0','0'};
  short flag=0,counter0=0,counter1=0;

    cin>>s;

    for(int i=0;i<4;i++){
        if(temp[0]=='0'){
               temp[0]=s[i];
               counter0+=1;
        }
        else{
        if(temp[1]=='0' && s[i]!=temp[0]){
            temp[1]=s[i];
            counter1+=1;
        }

            else{

                if(s[i]!=temp[0] && s[i]!=temp[1]){
                      flag=1;
                      break;
                }else
                {

                    if(s[i]==temp[0])
                        counter0+=1;
                    else
                        counter1+=1;
                }
        }}
    }
    if(flag)
        cout<<"No"<<endl;
    else
       {
           if(counter0==counter1 && counter0==2)
            cout<<"Yes"<<endl;
           else
            cout<<"No"<<endl;
       }


    return 0;
}
