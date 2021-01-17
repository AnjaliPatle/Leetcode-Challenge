class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)
            return 5;
        int count=0;
        int x=15;
        int arr[5]={1,2,3,4,5};
        for(int j=1;j<n;j++){
           for(int i=1;i<5;i++){
                arr[i]+=arr[i-1];
            } 
        }
       
        return arr[4];
    }
};
