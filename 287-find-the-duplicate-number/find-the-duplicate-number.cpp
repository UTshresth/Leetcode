class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       int f=nums[0];
       int s=nums[0];
       while(true){
          s=nums[s];
          f=nums[nums[f]];
          if(f==s) break;
       }
       int s2=nums[0];
       while(s!=s2){
        s=nums[s];
        s2=nums[s2];
       }  
          
       return s;
    }
};