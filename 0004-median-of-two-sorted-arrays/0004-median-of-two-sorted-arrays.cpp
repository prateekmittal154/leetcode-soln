class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median=0;
        
        int m = nums1.size();
        int n = nums2.size();
        vector<int> temp(m+n);
        int index = 0;
        int i = 0;
        int j = 0;
        
        if(m==0 && n==0) return 0;
        
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]) {
                temp[index] = nums1[i];
                i++;
                index++;
                }
            else{
                temp[index] = nums2[j];
                j++;
                index++;
            }
        }
        
        if(i<m && j>=n){
            while(i<m){
                temp[index] = nums1[i];
                i++;
                index++;
            }
        }
        
        if(i>=m && j<n){
            while(j<n){
                temp[index] = nums2[j];
                j++;
                index++;
            }
        }
        
        if(temp.size()%2==0){
            double ans = temp[(temp.size()/2)] + temp[(temp.size()/2)-1];
            median = ans/2.00000;
        }
        
        else 
            median = (temp[(temp.size())/2]);
  
        
        return median;
        
    }
};