#include <iostream>

using namespace std;

int main()
{
    char X;
    cin>>X;
    if(int(X)>=48 && int(X)<=57){
        cout<<"IS DIGIT"<<endl;
    }else{
        if(int(X)>=65 && int(X)<=90){
              cout<<"ALPHA"<<endl;
              cout<<"IS CAPITAL"<<endl;
    }else{if(int(X)>=97 && int(X)<=122)
             cout<<"ALPHA"<<endl;
             cout<<"IS SMALL"<<endl;


       }


    }
    return 0;
}
