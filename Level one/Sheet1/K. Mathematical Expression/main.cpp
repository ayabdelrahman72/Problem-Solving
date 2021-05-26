#include <iostream>

using namespace std;

int main()
{
    unsigned short A,B;
    char S,Q;
    int C;

    cin>>A>>S>>B>>Q>>C;

    if(int(S)== 43){
        if(A+B==C){
            cout<<"Yes"<<endl;
        }else
           cout<<A+B<<endl;
    }else {
        if(int(S)==45){
                if(A-B==C)
            cout<<"Yes"<<endl;
          else
            cout<<A-B<<endl;
        }else{
            if(int(S)== 42){
                if(A*B==C)
                    cout<<"Yes"<<endl;
                else
                    cout<<A*B<<endl;
            }



        }






    }
    return 0;
}
