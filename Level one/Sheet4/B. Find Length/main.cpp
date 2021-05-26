#include <iostream>

using namespace std;
/*
Given a string S. Print the length of S without using any string functions.

Note: Every string must be ended by '\0' so, you have to iterate over S characters until you find the '\0' character.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106).

Output
print the string length.
*/
int main()
{
    string s1;
    int counter=0;
    cin>>s1;
    for(int i=0;s1[i]!='\0';i++){
        counter+=1;
    }
    cout<<counter<<endl;
    return 0;
}
