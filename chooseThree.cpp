#include<bits/stdc++.h>
using namespace std;
int main(){
   int testeCase;
   cin>>testeCase;
   while(testeCase--){
     int n,sum;
    cin>>n>>sum;
    int* a=new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int makeThree=0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1;j<n-1;j++ ){
            for(int k=j+1; k<n; k++){
                if(a[i]+a[j]+a[k]==sum)
                 makeThree=1;
            }
        }
    }
    if(makeThree){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
   }
    return 0;
}