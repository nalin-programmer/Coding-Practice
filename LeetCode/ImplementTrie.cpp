#include <bits/stdc++.h>
#define int long long
#define mod 1e9 + 7
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
class Trie {
public:
    set<string> st;
    Trie() {
        st.clear();
    }
    
    void insert(string word) {
        st.insert(word);
    }
    
    bool search(string word) {
        if(st.find(word)!=st.end()){
            return true;
        }
        return false;
        
    }
    
    bool startsWith(string prefix) {
        for(string s : st){
            if(s.size()<prefix.size())continue;
            bool check = true;
            for(int i=0;i<prefix.size();i++){
                if(s[i]!=prefix[i]){
                    check = false;
                    break;
                }
            }
            if(check)return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio;
    
    return 0;
}