class Solution {
public:
    int countBinarySubstrings(string s) {
        int zo=0, oz=0,count0=0, count1=0, n=s.length();
        int i=0;
        while(i<n){
            while(i<n && s[i]=='0'){
                count0++;
                i++;
            }
            while(i<n && s[i]=='1'){
                count1++;
                i++;
            }
            zo+=min(count1,count0);
            count1=0; count0=0;
        }

        i=0;
        while(i<n){
            while(i<n && s[i]=='1'){
                count1++;
                i++;
            }
            while(i<n && s[i]=='0'){
                count0++;
                i++;
            }
            oz+=min(count1,count0);
            count1=0; count0=0;   
        }
        return oz+zo;
    }
};
