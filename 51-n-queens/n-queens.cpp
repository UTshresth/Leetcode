class Solution {
public:
     
     void sol(int c,vector<vector<string>>&ans,int n, vector<string> &s,vector<int>&rl,vector<int>&ld,vector<int>&ud){
       if(c==n){
        ans.push_back(s);
        return;

       }

       for(int r=0;r<n;r++){
         
         if(rl[r]==0&&ld[r+c]==0&&ud[n-1+c-r]==0){
         s[r][c]='Q';
          rl[r]=1;
         ld[r+c]=1;
         ud[n-1+c-r]=1;
         sol(c+1,ans,n,s,rl,ld,ud);
         s[r][c]='.';
         rl[r]=0;
         ld[r+c]=0;
         ud[n-1+c-r]=0;

       }


     }
     }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string> >ans;
        string s(n ,'.');
        vector<string> b(n);
        for(int i=0;i<n;i++){
        b[i]=s;}
        int c=0;

        vector<int> rl(n,0),ld(2*n-1,0),ud(2*n-1,0);
        sol(c,ans,n,b,rl,ld,ud);
return ans;

    }
};