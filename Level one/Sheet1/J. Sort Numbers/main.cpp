#include <iostream>

using namespace std;

int main()
{
     int A,B,C;
    cin>>A>>B>>C;
    if(A<B){
            if(B<C){
        cout<<A<<endl;
        cout<<B<<endl;
        cout<<C<<endl;
            }else {if(C<A){
             cout<<C<<endl;
             cout<<A<<endl;
             cout<<B<<endl;

                         }else{ cout<<A<<endl;
                               cout<<C<<endl;
                               cout<<B<<endl;
                              }}
    }else {if(C<B){cout<<C<<endl;
                  cout<<B<<endl;
                  cout<<A<<endl;

                 }else {if(C<A){cout<<B<<endl;
                               cout<<C<<endl;
                               cout<<A<<endl;

                               }else{cout<<B<<endl;
                                     cout<<A<<endl;
                                     cout<<C<<endl;}

                                    }}
    cout<<""<<endl;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;

    return 0;
}
