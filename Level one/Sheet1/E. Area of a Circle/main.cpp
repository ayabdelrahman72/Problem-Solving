#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
     double R;
     double area;
     cin>>R;
     area=3.141592653*(double)pow(R,2);
     printf("%.9lf",area);

    return 0;

}
