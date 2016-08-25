class Solution {
public:
    bool wordPattern(string pattern, string str) {
       map<string,string> table1;
       map<string,bool>table2;
       string first,second;
       int p;
       int startpos=0;
       for(int i=0;i<pattern.size();i++)
       {
           first=pattern[i]+'\0';
           // aaaa vs aa aa aa
           if(startpos==string::npos) return false;
           p=str.find(" ",startpos);
           second=str.substr(startpos,p-startpos);
           startpos=p+1;
           if(table1.find(first)!=table1.end())
           {
               if(table1[first]!=second)
                return false;
           }
           else if(table1.find(first)==table1.end())
           {
               if(table2.find(second)!=table2.end())
               return false;
               table1[first]=second;
               table2[second]=true;
           }
           else
           return false;
       }
       //aaa  vs aa aa 
       if(p!=string::npos) return false;
       return true;
    }
};