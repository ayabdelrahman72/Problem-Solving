#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    Given two numbers A and B. Print the greatest common divisor between (A, B).

Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.

For example:

the GCD of 8 and 12 is 4.

because the numbers that divides both 8 and 12 are (1,2,4) and 4 is the largest one .

Input
Only one line containing two numbers A and B (1 ≤ A, B ≤ 103).

Output
Print the GCD of A and B.
    */
    unsigned short A,B,mini,maxi,GCD;
    cin>>A>>B;
    mini=min(A,B);
    maxi=max(A,B);
    for(int i=1;i<=mini;i++){
        if(mini%i==0 && maxi%i==0){
            GCD=i;
        }
    }
    cout<<GCD<<endl;
    return 0;
}
