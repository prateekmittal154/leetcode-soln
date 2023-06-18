class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size()-2;
        
        while(low<=high){
            int mid = (low+high) >>1;
            
            if(nums[mid]==nums[mid^1]) low = low + 1;
            else high = high -1;
        }
        
        return nums[low];
    }
};