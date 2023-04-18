class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        
        int i=0;
        int j=0;
        
        while(i<n && j<m){
              ans += word1[i];
              i++;
              ans += word2[j];
              j++;
            }
        
        if(i<n){
            while(i<n){
                ans += word1[i];
                i++;
            }
        }
        
        else if(j<m){
            while(j<m){
                ans += word2[j];
                j++;
            }
        }
        
        
        return ans;
        
    }
};