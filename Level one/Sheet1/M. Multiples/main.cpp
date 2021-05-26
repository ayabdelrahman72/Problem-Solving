#include <iostream>

using namespace std;

int main()
{
    unsigned int A,B;
    cin>>A>>B;
    if(A>B){
        if(A%B==0){
            cout<<"Multiples"<<endl;
        }else
            cout<<"No Multiples"<<endl;

    }else{
         if(B%A==0){
            cout<<"Multiples"<<endl;
        }else
            cout<<"No Multiples"<<endl;

        }
    return 0;
}
