Print the following pattern for the given N number of rows.
Pattern for N = 4




The dots represent spaces.


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
      1 
    12
  123
Sample Input 2:
4
Sample Output 2:
      1 
    12
  123
1234
// Solution
#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cin>>n;
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<j;
    cout<<endl;
    }
return 0;
}

