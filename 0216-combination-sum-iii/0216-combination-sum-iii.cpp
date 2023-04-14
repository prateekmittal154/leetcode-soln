class Solution {
public:
    
    void solve(int index, vector<int>& nums, vector<vector<int>>& ans, vector<int>&ds, int k, int n){
        
        if(ds.size()==k){
            if(n==0){
                ans.push_back(ds);
                return;
            }
        }
        
        for(int i=index; i<nums.size(); i++){
            
            if(nums[i]>n) break;
            ds.push_back(nums[i]);
            solve(i+1,nums,ans,ds,k, n-nums[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> nums;
        
        for(int i=1; i<10; i++){
            nums.push_back(i);
        }
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(0,nums,ans,ds,k,n);
        
        return ans;
        
    }
};