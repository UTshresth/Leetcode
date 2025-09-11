class Solution {
void subseq(int x,vector<int> &a,vector<int> &b,vector<vector<int>> &y,int target){

        if(x==b.size()){

            if(target==0){
           
            y.push_back(a);
            return;}
            return;
            }
if(b[x]<=target){
       a.push_back(b[x]);

subseq(x,a,b,y,target-b[x]);
 a.pop_back();}

   
        
subseq(x+1,a,b,y,target);


 }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        int x=0;
        vector<vector<int>> ans;
        vector<int> s;
        subseq(x,s,candidates,ans,target);
        return ans;

    }
};