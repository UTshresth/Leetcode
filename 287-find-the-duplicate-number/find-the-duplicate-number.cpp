class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        vector<int>m(n,0);
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==0){
                m[nums[i]]=1;
            }
            else{
              x=nums[i];
              break;
            }
              
        }
       return x;
    }
};