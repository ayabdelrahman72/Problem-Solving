#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    Given two numbers A and B. Print the average of numbers from A to B inclusive rounded up to the nearest integer.

Input
Only one line containing two numbers A, B (1 ≤ A, B ≤ 100)

Output
Print the average rounded up to the nearest integer.


     */
     float A,B;
     short average;
     cin>>A>>B;
     average=round((A+B)/2);
     cout<<average<<endl;
    return 0;
}
