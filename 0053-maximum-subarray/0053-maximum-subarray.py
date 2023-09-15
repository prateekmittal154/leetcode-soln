class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxi = -100000000000
        summ = 0
        for i in nums:
            summ = summ + i;
            
            if(summ>maxi):
                maxi = summ
                
            if(summ<0):
                summ=0
        return maxi
            
        