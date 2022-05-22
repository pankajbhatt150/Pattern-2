Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  // Solution
  #include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>n;
    
    for(i=1;i<=(n+1)/2;i++)
    {
        for(k=1;k<=(n+1)/2-i;k++)
        {
            cout<<" ";
            for(j=1;j<=(2*i-1);j++)
            cout<<"*";
            cout<<endl;
        }
        
        for(i=n/2;i>0;i--)
        {
            for(k=1;k<=(n/2)+1;k++)
            cout<<" ";
           for(j=1;j<=(2*i-1);j++)
            cout<<"*";
             cout<<endl;
        }
    
    }
