#include <iostream>
#include <math.h>
using namespace std;
                                                                                           ///PROBLEM
/*
There is a building consisting of 10 000 apartments numbered from 1 to 10 000, inclusive.

Call an apartment boring, if its number consists of the same digit. Examples of boring apartments are 11,2,777,9999 and so on.

Our character is a troublemaker, and he calls the intercoms of all boring apartments, till someone answers the call, in the following order:

First he calls all apartments consisting of digit 1, in increasing order (1,11,111,1111).
Next he calls all apartments consisting of digit 2, in increasing order (2,22,222,2222)
And so on.
The resident of the boring apartment x answers the call, and our character stops calling anyone further.

Our character wants to know how many digits he pressed in total and your task is to help him to count the total number of keypresses.

For example, if the resident of boring apartment 22 answered, then our character called apartments with numbers 1,11,111,1111,2,22 and the total number of digits he pressed is 1+2+3+4+1+2=13.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤36) — the number of test cases.

The only line of the test case contains one integer x (1≤x≤9999) — the apartment number of the resident who answered the call. It is guaranteed that x consists of the same digit.

Output
For each test case, print the answer: how many digits our character pressed in total.

*/
                                                                                               ///SOLUTION
//there is a rule like factorial but instead of multiplying summation 4=1+2+3+4 the summation of them is 10  , 3=1+2+3 summation is  5
//2=1+2 summation is 3  and so on
// we can get the summation directly through this rule (number*(number+1))/2
int main()
{
    int testCases,n,numberOfDigits,result;
    short number; //means the number of the digit is 1 or 2 or 3 and so on
    cin>>testCases;
    while(testCases--){
        cin>>n;
        numberOfDigits=log10(n)+1;
        number=n%10;
        if(number==1)
            result=(numberOfDigits*(numberOfDigits+1))/2;
        else{
            result=((number-1)*10)+(numberOfDigits*(numberOfDigits+1))/2;
        }
        cout<<result<<endl;
    }
    return 0;
}
