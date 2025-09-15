class Solution {
public:
 int sol(int c,int n, vector<string> &s,vector<int>&rl,vector<int>&ld,vector<int>&ud){
       if(c==n){
        
        return 1;

       }
        int x=0;
       for(int r=0;r<n;r++){
         
         if(rl[r]==0&&ld[r+c]==0&&ud[n-1+c-r]==0){
         s[r][c]='Q';
          rl[r]=1;
         ld[r+c]=1;
         ud[n-1+c-r]=1;
        x=x+sol(c+1,n,s,rl,ld,ud);
         s[r][c]='.';
         rl[r]=0;
         ld[r+c]=0;
         ud[n-1+c-r]=0;

       }
       
       }

        return x;
     
 }
    int totalNQueens(int n) {

        
       int x=0;
        string s(n ,'.');
        vector<string> b(n);
        for(int i=0;i<n;i++){
        b[i]=s;}
        int c=0;

        vector<int> rl(n,0),ld(2*n-1,0),ud(2*n-1,0);
       x= sol(c,n,b,rl,ld,ud);
return x;

        
    }
};