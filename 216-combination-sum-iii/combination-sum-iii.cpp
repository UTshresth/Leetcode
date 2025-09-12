class Solution {

    void subseq(int b,vector<int> &a,vector<vector<int>> &y,int target,int k,int cnt){
           
            if(target==0&&cnt==k){
           
            y.push_back(a);
            return;}


           if(b>9||target<0)
            return;

  if(cnt>k)
             return;
           

          
            
if(b<=target){
       a.push_back(b);

subseq(b+1,a,y,target-b,k,cnt+1);
 a.pop_back();

 }
 
subseq(b+1,a,y,target,k,cnt);


 }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        int cnt=0;
        int b=1;
        vector<int> a;
        vector<vector<int>> ans;
        subseq(b,a,ans,n,k,cnt);
        return ans;
        
    }
};