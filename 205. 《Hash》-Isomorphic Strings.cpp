class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        map<char,char> table;
        map<char,bool> check;
        char d1,d2;
        for(int i=0;i<n;i++)
        {
            d1=s[i];
            d2=t[i];
            if(table.find(d1)!=table.end())
            {
                if(table[d1]!=d2)
                return false;
            }
            else
            {
                if(check.find(d2)!=check.end())
                  return false;
                table[d1]=d2;
                check[d2]=true;
            }
        }
        return true;
    }
};