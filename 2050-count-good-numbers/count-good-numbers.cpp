class Solution {
public:
 const long long MOD = 1e9+7;
long long pow(int x,long long n){
       if(n==0)
       return 1;
       if(n%2==0){
         long long half =pow(x,n/2)%MOD;
         return (half*half)%MOD;}
    else return (x*(pow(x,n-1)%MOD))%MOD;

       }



    int countGoodNumbers(long long n) {

        long long x= (n+1)/2;
        long long y=n/2;

        long long k=pow(5,x);
        long long z=pow(4,y);
        return (k*z)%MOD;
        
    }
};