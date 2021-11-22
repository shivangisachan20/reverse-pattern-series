Reversing Series Pattern
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 5
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
Input format : N (Total no. of rows)

Output format : Pattern in N lines

void printPatt(int n)
{
int j,k=0;
    for(int i=1;i<=n;i++){
       if(i%2==1)
       {
           for(j=k+1;j<=k+i;j++)
           {
               cout<<j<<" ";
           }
           cout<<endl;
           k=j;

       }
        else
        {
            k=k+i-1;
            for(j=k;j>=k-i+1;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}
