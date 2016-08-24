class Solution {
public:
    bool isHappy(int n) {
       map<int,bool> p;
       int sum=n;
       while(sum>0)
       {
           sum=0;
           while(n>0)
           {
               sum+=pow(n%10,2);
               n=n/10;
           }
           if(sum==1)
           return true;
           n=sum;
           if(p.find(sum)!=p.end())
           break;
           else
           p[sum]=true;
       }
       return false;
    }
};