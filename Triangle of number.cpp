Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
// Solution
             #include <iostream>
using namespace std;
int main() {
    int i,j,k,x,z,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=2*i-2;
        z=i;
        for(k=1;k<=n-i;k++)
            cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<z;
            z++;
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<x;
            x--;
        }
        cout<<endl;
    }
    return 0;
    
}
