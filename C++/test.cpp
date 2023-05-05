#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    cout<<"Pascal triangle is: "<<endl;
    for(int i=0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<(fact(i)/(fact(j) * fact(i-j)))<<" ";
        }

        cout<<endl;
    }
    return 0;
}
/*
Enter the number of rows:
5
Pascal triangle is:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
