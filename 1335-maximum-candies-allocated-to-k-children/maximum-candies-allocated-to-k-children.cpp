class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
         int maxi=candies[0];
        for(int i=0;i<candies.size();i++){
            if(maxi<candies[i]){
                maxi=candies[i];
            }
        }
            int low=1;
        int high=maxi;
           long long ans=0;
        while(low<=high){
            long long h1=k;
            long long mid=(high+low)/2;
           
            for(int i=0;i<candies.size();i++){
              
                if(candies[i]>=mid){
                    int  d=candies[i]/mid;
                   h1=h1-d;
                }

            }
            if(h1<=0) {
            low=mid+1;
            ans=max(mid,ans);
            }

            if(h1>0){
                high=mid-1;
       
            }

        }
    return ans; 
    }
};