#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    int sum1=0, sum2=0, count=0;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum1+=arr[i];

    }

    sum1=sum1/2;

    sort(arr,arr+n);

    for(i=n-1; i>=0; i--)
  {
    sum2+=arr[i];
    count++;
    if(sum1<sum2)
    {
        break;
    }
  }

  cout<<count;

    return 0;
}
 
