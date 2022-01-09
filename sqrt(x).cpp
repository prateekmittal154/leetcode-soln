class Solution {
public:
    long long int mySqrt(int x) {
        
        long long int s=0;
        long long int e=x;
        
        long long  int m= s+ (e-s)/2;
        
        long long int ans=0;
        
        while(s <= e){
            
            if(m*m==x) return m;
            
              if(m*m<x){
                
                   ans=m;
                
                   s=m+1;
                }
            
            if(m*m>x) e= m-1;
        
            
          
            
            m= s +(e-s)/2;
        }
        
        return ans;
    }
};
