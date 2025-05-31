#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &a,int i,int n){
    if(i==n) return;
    int j=i;
    while(j>0&&a[j-1]>a[j]){
        int temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
    insertion_sort(a,i+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
   insertion_sort(a,1,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//Worst Case=O(n^2)
//Best caseO(n)
