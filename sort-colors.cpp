class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       int size=nums.size();
       int low=0;
       int mid=0;
       int high=size-1;
        
        while(mid<=high){
            
            switch(nums[mid]){
                    
                case 0:
                    swap(nums[mid],nums[low]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
                    //We do not increment mid because we again need to check the element brought after swapping//
                    break;
            }
        }
        
    }
};
