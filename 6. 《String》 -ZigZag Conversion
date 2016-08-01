class Solution {
public:
    string convert(string s, int numRows) {
        int l=s.size();
        int n=numRows;
        string result(s);
        int base=2*n-2;
        int idx=0;
        //*容易出现当n=1时，后面出现死循环
        if(n<=1) return result;
        // first line
        for(int i=0;i<l;i=i+base)
        {
             result[idx++]=s[i];
        }
        //for 1~ n-2
        int j,k;
        for(int i=1;i<=n-2;i++)
        {
           for(j=i,k=base-i;j<l&&k<l;j=j+base,k=k+base)
            {
                result[idx++]=s[j];
                result[idx++]=s[k];
            }
            if(j<l) result[idx++]=s[j];
            if(k<l) result[idx++]=s[k];
        }
        //last line
        for(int i=n-1;i<l;i=i+base)
        {
            result[idx++]=s[i];
        }
        return result;
    }
};