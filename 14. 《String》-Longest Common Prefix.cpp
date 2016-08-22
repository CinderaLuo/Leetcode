class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if(strs.size()<1) return string("");
		string result;
		string minstring=strs[0];
		for(int i=1;i<strs.size();i++)
		{
			//找出最小长度的字符串
			if(minstring>strs[i]);
			minstring=strs[i];
		}
		int j;
		for(int endp=minstring.size()-1;endp>=0;endp--)
		{
			result=minstring.substr(0,endp+1);
			for(j=0;j<strs.size();j++)
			{
				if(strs[j].find(result)!=0)
				break;
			}
			if(j==strs.size())
			{
				return result;
			}
		}
		return string("");
	}
};