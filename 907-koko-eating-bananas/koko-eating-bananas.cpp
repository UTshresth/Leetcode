class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=piles[0];
        for(int i=0;i<piles.size();i++){
            if(max<piles[i]){
                max=piles[i];
            }
        }
            int low=1;
        int high=max;
           int ans=INT_MAX;
        while(low<=high){
            int h1=h;
            int mid=(high+low)/2;
            
         
            for(int i=0;i<piles.size();i++){
                if(piles[i]<=mid)
                h1--;
                if(piles[i]>mid){
                    int  d=piles[i]/mid;
                    if(piles[i]%mid>0){
                        d++;
                    }
                   

                    h1=h1-d;
                }

            }
            if(h1<0) low=mid+1;
            if(h1>=0){
                high=mid-1;
       
            }

        }
    return high+1;
        
    }
};