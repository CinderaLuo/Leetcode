class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream strstream(str);
        int i=0;
        map<char,string> a1;
        map<string,char> a2;
        while(i<pattern.size() && strstream>>str)
        {
            if(a1.find(pattern[i])!=a1.end() && a2.find(str)!=a2.end())
            {
                if(a1[pattern[i]]!=str || a2[str]!=pattern[i])
                return false;
            }
            else if(a1.find(pattern[i])==a1.end() && a2.find(str)==a2.end())
            {
                a1[pattern[i]]=str;
                a2[str]=pattern[i];
            }
            else
            return false;
            i++;
        }
        if(i<pattern.size() || strstream>>str) return false;
        return true;
    }
};