class Solution {
public:
    
    bool BinarySearch(vector<int>& arr, int x, int low, int high){
        
    while(low<=high){
        
    int mid = (low + high)/2;
        
    if (x == arr[mid])
        
        return true;
        
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1;
        
    else                       // x is on the left side
        high = mid - 1;
    }
        
        return false;
   
    }
    
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n= nums.size();
        vector<int> sol;
        
        for(int i=1; i<=n; i++){
            
            if(BinarySearch(nums, i, 0, n-1)==0){
                
                sol.push_back(i);
            }
        }
        
        return sol;
    }
};