class Solution {
public:
    bool isDecimal(string s){
        int n=s.length();
        if(n==0 || n==1)
            return false;
        int i=0;
        if(s[i]=='+' || s[i]=='-')
            i++;
        string x;
        while(i<n){
            if(s[i]=='.'){
                if(x.length()!=0 && (!isInteger(x)&&!isExp(x)))
                    return false;
                if(x.length()==0 && (i==1) && i==n-1)
                    return false;
                if(i==n-1)
                    return true;
                else if(s[i+1]=='-' || s[i+1]=='+')
                    return false;
                return isInteger(s.substr(i+1))||isExp(s.substr(i+1));
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
                return false;
            x+=s[i];
            i++;
        }
        return false;
    }
    bool isInteger(string s){
        int n=s.length();
        if(n==0)
            return false;
        if(n==1 && (s[0]=='-' || s[0]=='+'))
            return false;
        int i=0;
        if(s[i]=='+' || s[i]=='-')
            i++;
        while(i<n){
            if(s[i]<'0' || s[i]>'9')
                return false;
            i++;
        }
        return true;
    }
    bool isExp(string s){
        int n=s.length();
        if(n==0)
            return false;
        
        string x;
        int i=0;
        while(i<n){
            if(s[i]=='e' || s[i]=='E'){
               if(!isDecimal(x) && !isInteger(x))
                    return false;
                string last=s.substr(i+1);
                return isInteger(last); 
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
                return false;
            x+=s[i];
            i++;
        }
        return false;
    }
    bool isNumber(string s) {
        int n=s.length();
        if(n==1){
            return (s[0]>='0' && s[0]<='9');
        }
        bool flag=false;
        for(int i=0;i<n;i++)
            if(s[i]=='.'){
                if(flag)
                    return false;
                else flag=true;
            }
        return isInteger(s)||isDecimal(s)||isExp(s);
    }
};
