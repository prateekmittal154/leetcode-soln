class Solution {
public:
    
    int firstOccurence(vector<int>& nums, int target){
        
        int s=0;
        int e= nums.size()-1;
        int m= s + (e-s)/2;
        
        int ans=-1;
        
        while(s<=e){
            
            if(nums[m]==target){
                
                ans=m;
                e=m-1;
                
                
            }
            
            else if (nums[m]<target) s=m+1;
            
            else e=m-1;
            
            
            m= s + (e-s)/2;
        }
        
        return ans;
    }
    
     int lastOccurence(vector<int>& nums, int target){
        
        int s=0;
        int e= nums.size()-1;
        int m= s + (e-s)/2;
        
        int ans=-1;
        
        while(s<=e){
            
            if(nums[m]==target){
                
                ans=m;
                s=m+1;
                
                
            }
            
            else if (nums[m]<target){
                s=m+1;
            }
            
            else {
                e=m-1;
            }
            
            m= s + (e-s)/2;
        }
         
         return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = firstOccurence(nums,target);
        int last = lastOccurence(nums,target);
        
        vector<int> ans;
        
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
}
};
