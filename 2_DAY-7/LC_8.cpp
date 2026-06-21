// String to integer

class Solution {
public:
    int myAtoi(string s) {
        int n= s.size();
        int sign = 1;
        long long ans =0;
        int i =0;
        while(i<n && isspace(s[i])) i++;
         if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') sign =-1;
            if(s[i]=='+') sign = 1;
            i++;
         }
        
        while(i<n && isdigit(s[i])){
            long long dig = s[i]-'0';
            ans = ans*10+dig;
            if(ans*sign > INT_MAX) return INT_MAX;
            if(ans*sign<INT_MIN) return INT_MIN;
            i++;
        }
            return ans*sign;
    }
};