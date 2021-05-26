#include <iostream>

using namespace std;

int main()
{
   /*
   iven N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.
    */
    short N,neg=0,pos=0,even=0,odd=0;
    int X;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X;
        if(X%2==0){
            even+=1;
        }
        else
           odd+=1;
        if(X>0)
            pos+=1;
        else if(X<0)
            neg+=1;
    }
  cout<<"Even: "<<even<<endl;
 cout<<"Odd: "<<odd<<endl;
 cout<<"Positive: "<<pos<<endl;
 cout<<"Negative: "<<neg<<endl;
    return 0;
}
