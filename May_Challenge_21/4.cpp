class Solution {
public:
    bool checkPossibility(vector<int>& arr) {
        int n = arr.size() ;
        if(n==1)
            return true;
        
        bool left=  true,right = true ;

        int cnt = 0 ;
        int  mx =  arr[0] ;
        for(int i = 1 ; i< n ; i++){
            if(arr[i] < mx){
                cnt++ ;
                if(cnt ==2){
                    left= false;
                    break;
                }
                
            }
            else
                mx = arr[i];
        }
        cnt = 0 ;
      	int  mn =  arr[n-1] ;
        for(int i = n-1 ; i>=0; i--){
            if(arr[i] > mn){
                cnt++ ;
                if(cnt ==2){
                    right= false;
                    break;
                }
            }
            else
                mn = arr[i];
        }
        if(left or right)  
            return true ;
        return false;
    }
};
