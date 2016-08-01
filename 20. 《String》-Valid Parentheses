class Solution {
public:
	bool isValid(string s) {
		stack<char> bk;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='('||s[i]==')'||s[i]=='{'||s[i]=='}'||s[i]=='['||s[i]==']')
			{
				//bk.top()==NULL 错误写法
				if(!bk.empty())
				{
					if((bk.top()=='('&&s[i]==')')||(bk.top()=='{' && s[i]=='}' )||(bk.top()=='['&&s[i]==']'))
						bk.pop();
					else
						bk.push(s[i]);
				}
				else
					bk.push(s[i]);
			}
		}
		if(bk.empty()) return true;
		else  { return false;}
	}
};