class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        
        sort(strs.begin(), strs.end());
        
        cout<<endl;
        
        int m = 0;
        int n = min(strs[0].size(), strs[strs.size()-1].size());
        
        for(m=0; m<n; m++){
            
            if(strs[0][m] == strs[strs.size()-1][m]) ans+=strs[0][m];
            
            else break;
        }
         return ans;
    }
};