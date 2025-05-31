#include<iostream>
#include<vector>
using namespace std;
int f(vector<int>&a, int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while(a[i]<=pivot&&i<=high){
            i++;
        }
        while(a[j]>pivot&&j>=low){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
    
}
void quick_sort(vector<int> &a,int low, int high){
    if(low<high){
    int pindex=f(a,low,high);
    quick_sort(a,low,pindex-1);
    quick_sort(a,pindex+1,high);
    }}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
   quick_sort(a,0,n-1);
   for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//Best case=O(nlogn)
//Worst case=O(n^2)
