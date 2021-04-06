class Solution {
public:
    int minOperations(int n) {
        long int x=n/2;
        if(n%2==0)
            return x*x;
        return (x)*(x+1);
    }
};
