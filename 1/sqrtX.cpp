class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0||x==1){
            return x;
        }
        int low=1;
        int  high=x;
        int mid,ans;
        while(low <=high){

        
         mid=low+(high-low)/2;
        
        if(mid<=x/mid){
        
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
        
        }
        return (ans);
    }
};