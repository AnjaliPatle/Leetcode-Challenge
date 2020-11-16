class Solution {
public:
    bool isHappy(int n) {
        bool arr[11]={0,1,0,0,0,0,0,1,0,0,1};
        int temp;
        while(1){
            if(n<=10)return arr[n];
            temp=0;
            while(n>0){
                temp+=(n%10)*(n%10);
                n/=10;
            }
            n=temp;
        }
        return true;
    }
};