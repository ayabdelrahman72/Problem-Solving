#include <iostream>

using namespace std;
/*
Problem Statement
There are
N
 squares arranged in a row from left to right.

The height of the
i
-th square from the left is
H
i
.

You will land on a square of your choice, then repeat moving to the adjacent square on the right as long as the height of the next square is not greater than that of the current square.

Find the maximum number of times you can move.

Constraints
All values in input are integers.
1
≤
N
≤
10
5
1
≤
H
i
≤
10
9
Input
Input is given from Standard Input in the following format:

N

H
1

H
2

.
.
.

H
N

Output
Print the maximum number of times you can move.

Sample Input 1
5
10 4 8 7 3
Sample Output 1
2
By landing on the third square from the left, you can move to the right twice.

Sample Input 2
7
4 4 5 6 6 5 5
Sample Output 2
3
By landing on the fourth square from the left, you can move to the right three times.

Sample Input 3
4
1 2 3 4
Sample Output 3
0
*/
int main()                               //NOT SOLVED
{
   int n;
   int previous,current;
	cin >> n;
	cin>>previous;
	for(i=0;i<n;i++){
        cin>>current;
        if(n>previous && current<previous)
            cout<<i+1;
	}
    return 0;
}
/*
int n;
	cin >> n;
	int pre = 0, now = 0, count = 0, maxn = 0;
	cin >> pre;
	for(int i = 1; i < n; i ++) {
		cin >> now;
		if(now <= pre) {
			count ++;
		} else {
			maxn = max(maxn, count);
			count = 0;
		}
		pre = now;
	}
	maxn = max(maxn, count);
	cout << maxn << endl;
*/
