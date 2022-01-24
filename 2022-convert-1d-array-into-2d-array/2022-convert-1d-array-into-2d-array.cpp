class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int k= original.size();
        
        if(m*n<k || m*n>k) return ans;
        
        for(int i=0;i<m;i++){
 ans.push_back(vector<int>(original.begin()+i*n,original.begin()+i*n+n));
        }
         return ans;
    }
};