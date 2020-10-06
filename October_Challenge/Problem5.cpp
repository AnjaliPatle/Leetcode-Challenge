class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0)return 1;
        int temp=N,count=0,x=1;
        while(temp>0){
            count++;
            temp=temp>>1;
        }
        temp=N;
    for(int i=0;i<count;i++){
        temp=temp^x;
        x=x<<1;
    }
        return temp;
    }
};