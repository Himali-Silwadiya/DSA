#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &a,int n){
    for(int i=1;i<n;i++){
       int j=i-1;
       int key=a[i];
       while(j>=0 && a[j]>key){
       a[j+1]=a[j];
       j--;
    }
    a[j+1]=key;
}
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
   insertion_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//Worst Case=O(n^2)
//Best caseO(n)
