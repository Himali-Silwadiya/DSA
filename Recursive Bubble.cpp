#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &a,int n){
    if(n==1) return;
    int swapped=0;
    for(int j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        swapped++;}
        if(swapped==0)
        break;
    }
    bubble_sort(a,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//Worst case=O(n^2)
//Best case=O(n)
