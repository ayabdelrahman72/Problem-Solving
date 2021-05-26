#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float N;
  cin>>N;
    if(N/(int)N==1){
        cout<<"int"<<" "<<N<<endl;
    }else

        cout<<"float"<<" "<<(int)N<<" "<<setprecision(3)<<N-(int)N<<endl;
    return 0;
}
