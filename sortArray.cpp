#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int* a=new long long int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n); //ascending
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+n,greater<long long int>()); //descending
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    delete []a;
    return 0;
}