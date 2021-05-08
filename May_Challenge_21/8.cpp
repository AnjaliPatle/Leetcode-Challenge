class Solution {
public:
    long long reverse_num(long long x ){
        long ans = 0;
        while(x > 0){
            ans = 10 * ans + x % 10;
            x /= 10;
        }
        return ans;
    }
    bool isPalindrome(long long x){
       return x == reverse_num(x);
    }
    int superpalindromesInRange(string left, string right) {
        long long int L=stoll(left), R=stoll(right);
        int ans=0;
        
        for(int i=1; i<100000;i++){
            string l=to_string(i);
            string f=l;
            reverse(l.begin(),l.end());
            string e=f+l;
            string o=f+l.substr(1);
            unsigned long long int x=stoull(e);
            
            x*=x;
            if(x>=L && x<=R && isPalindrome(x))
                ans++;
            x=stoull(o);
            x*=x;
            if(x>=L && x<=R && isPalindrome(x))
                ans++;
        }
        return ans;
    }
};
