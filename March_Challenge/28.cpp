class Solution {
public:
    string originalDigits(string s) {
        int fre[26]={0};
        int digits[26]={0};
        for(auto x:s)
            fre[x-'a']++;
        digits[0] = fre['z' - 'a'];
        digits[6] = fre['x' - 'a'];
        digits[4] = fre['u' - 'a'];
        digits[2] = fre['w' - 'a'];
        digits[8] = fre['g' - 'a'];
        digits[5] = fre['f' - 'a'] - digits[4];
        digits[1] = fre['o' - 'a'] - digits[2] - digits[4] - digits[0];
        digits[3] = fre['t' - 'a'] - digits[2] - digits[8];
        digits[7] = fre['s' - 'a'] - digits[6];
        digits[9] = fre['i' - 'a'] - digits[5] - digits[6] - digits[8];
        
        string ans;
        for(int i=0;i<=9;i++){
            for(int j=0;j<digits[i];j++)
                ans+=(char)i+'0';
        }
        return ans;
    }
};
