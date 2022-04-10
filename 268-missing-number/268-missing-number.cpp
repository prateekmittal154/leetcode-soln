class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int sum_e = n*(n+1)/2;
        
        int sum=0;
        
        for(int i=0; i<n;i++){
            
            sum = sum+ nums[i];
            
        }
        
        int missing_no = sum_e-sum;
        
        return missing_no;
        
    }
};