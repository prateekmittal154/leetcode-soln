class Solution {
public:
    vector<int> generaterows(int n){
        
        vector<int> ans;
        ans.push_back(1);
        
        long long int ansint = 1;
        for(int i=1;i<n; i++){
            
            ansint = ansint*(n-i);
            ansint = ansint/(i);
            ans.push_back(ansint);
        }
        
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        
        
        for(int i=1; i<=numRows; i++){
            ans.push_back(generaterows(i));
        }
        
        return ans;
        
    }
};