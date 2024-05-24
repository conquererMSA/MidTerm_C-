#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=100000;
    char* s=new char[n];
    cin.getline(s,n);
    
    sort(s,s+strlen(s));
    for(int i=0; i<strlen(s); i++){
        if(s[i]!=' '){
            cout<<s[i];
        }
    }
    return 0;
}