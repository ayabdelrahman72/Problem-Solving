#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    short X,Y;
    cin>>X;
    Y=X/(short)pow(10,(to_string(X).length())-1);
    if(Y%2==0){
        cout<<"EVEN"<<endl;
    }else
        cout<<"ODD"<<endl;

    return 0;
}
