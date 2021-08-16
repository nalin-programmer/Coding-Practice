#include <bits/stdc++.h>
#define ll long long 
#define mod 1e9 + 7
using namespace std;
class Solution {
public:
    bool check(vector<int> ch, vector<int> arr){
        for(int i=0;i<256;i++){
            if(ch[i]>arr[i])return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> ch(256,0), arr(256,0);
        for(int i=0;i<t.size();i++){
            ch[t[i]]++;
        }
        string ans = s;
        bool isans = false;
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
            if(check(ch,arr)){
                isans = true;
                if(ans.size()>i-l+1){
                    ans = s.substr(l,i-l+1);
                }
                while(check(ch,arr)){
                    if(ans.size()>i-l+1)
                    ans = s.substr(l,i-l+1);
                    arr[s[l]]--;
                    l++;
                }
            }
        }
        if(!isans)return "";
        return ans;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    return 0;
}
