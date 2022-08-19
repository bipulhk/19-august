#include <bits/stdc++.h>
using namespace std;
// void solve(string up, string s){
//     if(s.empty()){
//         cout<<up<<endl;
//         return;
//     }
//     char c = s[0];
//     solve(up+c, s.substr(1));
//     solve(up, s.substr(1));
// }

vector<string> solve(string up, int index, string s, vector<string>& ans){
    if(index == s.length()-1){
        // int i = stoi(up);
        ans.push_back(up);
        return ans;
    }
    char c = s[index];
    solve(up+c,index+1,s, ans);
    solve(up, index+1, s, ans);
    return ans;
}

int main(){
    string s = "123456";
    int len = s.length();
    vector<string> i;
    vector<string> ans = solve("",0, s, i);
    sort(ans.begin(), ans.end());
    // for (string s : ans){
    //     cout<<s<<endl;
    // }
    // for(int i = 0; i < ans.size(); i++){
        // ans[i] = stoi(ans[i]);
    // }
    for(auto i : ans){
        cout<< i <<" ";
    }
    // cout<<stoi(s);
    return 0;
}