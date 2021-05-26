#include <iostream>

using namespace std;

int main()
{
    short A,B;
    char S;
    cin>>A>>S>>B;
    if(int(S)==60){
        if(A<B)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;

        }else {if(int(S)==61){
              if(A==B)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
        }else{if(int(S)==62){
              if(A>B)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
        }


        }

        }
    return 0;
}
