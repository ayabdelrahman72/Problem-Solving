#include <iostream>

using namespace std;

int main()
{ /*Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem. */


 char X;
 cin>>X;
 if(int(X)>=97 && int(X)<=122){
  cout<<char(X-32)<<endl;
 }else {if(int(X)>=65 && int(X)<=90)
          cout<<char(X+32)<<endl;
      }

    return 0;
}
