
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[mini])
            mini=j;
        }
        swap(a[i],a[mini]);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
