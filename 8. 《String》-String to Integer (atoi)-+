class Solution {
public:
    int myAtoi(string str) {
      int base=0; 
      int sign=1;
      int i=0;
      while(str[i]==' ') i++;
      if(str[i]=='+'||str[i]=='-')
      {
          sign=1-2*(str[i++]=='-');
      }
      while(str[i]>='0'&&str[i]<='9')
      {
          //不用特意考虑-2147483648，其中2147483648>INT_MAX,反正最后输出都是INT_MIN
          if(base>INT_MAX/10 || (base==INT_MAX/10 && str[i]>'7'))
          {
              if(sign==1) return INT_MAX;
              else return INT_MIN;
          }
          base=base*10+(str[i++]-'0');
      }
      return base*sign;
    }
};