#include <bits/stdc++.h>
using namespace std;

int sol(string s, string ss){
    vector<char> v,vv;
    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]);
        vv.push_back(ss[i]);
    }
    
}
int main(){
    string s = "abcab";
    string ss = "aabab";
    // cin>>s;
    // cin>>ss;

    cout<<sol(s, ss);
    return 0;
}