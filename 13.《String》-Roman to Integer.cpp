class Solution {
public:
    int romanToInt(string s) {
    map<string,int> sample;
    sample.insert(make_pair("I",1));
    sample.insert(make_pair("V",5));
    sample.insert(make_pair("X",10));
    sample.insert(make_pair("L",50));
    sample.insert(make_pair("C",100));
    sample.insert(make_pair("D",500));
    sample.insert(make_pair("M",1000));
    map<string,int>::iterator p;
    int sum=0;
    string ss;
    int tmp,pre;
    tmp=pre=0;
    for(int i=0;i<s.size();i++)
    {
        ss=s.substr(i,1);
        p=sample.find(ss);
        if(p!=sample.end())
        {
            if(p->second==pre)
            tmp+=p->second;
            else if(p->second<pre)
            {
                sum+=tmp;
                tmp=p->second;
            }
            else
            {
                tmp=p->second-tmp;
            }
        }
        pre=p->second;
    }
    sum=sum+tmp;
    return sum;
    }
};