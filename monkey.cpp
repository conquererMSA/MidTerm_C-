// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int n=100000;
//     char s[n];
//     while(cin.getline(s,n)){
//         int len=strlen(s);
//     sort(s,s+strlen(s));
//     for(int i=0; i<len; i++){
//         if(s[i]!=' '){
//             cout<<s[i];
//         }
//     }
//     cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// const int len = 100001;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     char s[len];

//     while(cin.getline(s, len)) {
//         int len = strlen(s);

//         int count[26] = {0};
//         for(int i = 0; i < len; ++i) {
//             if(s[i] != ' ') {
//                 ++count[s[i] - 'a'];
//             }
//         }
//         string sortedString;
//         for(int i = 0; i < 26; ++i) {
//             for(int j = 0; j < count[i]; ++j) {
//                 sortedString += (char)('a' + i);
//             }
//         }
//         cout << sortedString << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int len = 100001;
//    char s[len];
//    while(cin.getline(s, len)) {
//         int len = strlen(s);

//         int count[26] = {0};
//         for(int i = 0; i < len; ++i) {
//             if(s[i] != ' ') {
//                 ++count[s[i] - 'a'];
//             }
//         }
//         string sortedString;
//         for(int i = 0; i < 26; ++i) {
//             for(int j = 0; j < count[i]; ++j) {
//                 sortedString += (char)('a' + i);
//             }
//         }
//         cout << sortedString << endl;
//     }
//      return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int len = 100001;
    char s[len];
    while (cin.getline(s, len)) {
        int frArr[26] = {0};
        for (int i = 0; s[i] != '\0'; ++i) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                frArr[s[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < frArr[i]; ++j) {
                cout << (char)('a' + i); 
            }
        }
        cout << '\n';
    }

    return 0;
}
