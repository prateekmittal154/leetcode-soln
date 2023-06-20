class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        int n = nums2.size();
        vector<int> ans(n,-1);
        vector<int> arr;
        
        for(int i=n-1; i>=0; i--){
            
            while(!st.empty() && st.top() <= nums2[i] ) {
                    st.pop();
                }
            if(i<n)
                if(!st.empty()) ans[i] = st.top();
            
            st.push(nums2[i]);
            
        }
        
        unordered_map<int,int> map;
        
        for(int i=0; i<n; i++){
            map[nums2[i]]=ans[i];
        }
        
        for(int i=0; i<nums1.size();i++){
            arr.push_back(map[nums1[i]]);
        }
      
        return arr;
    }
};