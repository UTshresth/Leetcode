class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        map<long long ,long long> m;
        for(int i=0;i<nums.size();i++)
        {
            m[i-nums[i]]++;
        
        }
        long long cnt=0;
        for(auto it:m){
            cnt=cnt+((it.second)*(it.second-1))/2;
        }
        long long tp=(nums.size()*(nums.size()-1))/2;
       long long  bp= tp-cnt;
       return bp;
    }
};