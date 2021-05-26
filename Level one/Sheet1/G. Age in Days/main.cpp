#include <iostream>

using namespace std;

int main()
{
    int N;
    short months=0,years=0,days=0;
    cin>>N;

        if(N%365>=0){
                years=N/365;

            N-=(years*365);}
            if(N>0 && N%30>=0){
                    months=N/30;
                    N-=(months*30);

            }
            if(N>0){
                    days=N;
                }
        cout<<years<<" years"<<endl;
        cout<<months<<" months"<<endl;
        cout<<days<<" days"<<endl;



    return 0;
}
