#include <iostream>

using namespace std;

int main()
{
   /*Given a number N that is the code number for a book. Then, print the destination according to the following table:

61 -> Art of computer programming

71 -> Introduction to algorithm

11 -> Competitive programming

29 -> Programming challenges

Note: If the number isn't found in the above table, Print: Not found

Input
Only one line containing a number N (1 ≤ N ≤ 100)

Output
Print the book name corresponding to the number N, but if it doesn't exist print "Not found" */
    unsigned short N;
    cin>>N;
    switch(N){
    case 61:
        cout<<"Art of computer programming"<<endl;
        break;
    case 71:
        cout<<"Introduction to algorithm"<<endl;
        break;
    case 11:
        cout<<"Competitive programming"<<endl;
        break;
    case 29:
         cout<<"Programming challenges"<<endl;
         break;
    default:
        cout<<"Not found"<<endl;
        break;

    }
    return 0;
}
