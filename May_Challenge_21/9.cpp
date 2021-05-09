class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        unsigned int sum=0;
        for(int i=0;i<target.size();i++){
            sum+=target[i];
            pq.push(target[i]);
        }
        if(pq.top()==1)
            return true;
        while(pq.top()!=1){
            int x=pq.top();
            pq.pop();
            sum-=x;
            if(x<=sum || sum<1)
                return false;
            x%=sum;
            pq.push(x);
            sum+=x;
        }
        return true;
    }
};
