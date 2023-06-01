class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0; i<n-1; i++){
            if(nums[i]!= nums[i+1]-1){
                return (nums[i]+1);
            }
        }
        
        if(nums[n-1] != n) return n;
        return 0;
    }
};