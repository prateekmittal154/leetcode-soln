class Solution {
    public :
        int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i< nums.size();i++)
        {
            if(nums[count] != nums[i])
            {
                nums[count+1] = nums[i];
                count++;
            }
        }
        return count+1;
        
    }
};