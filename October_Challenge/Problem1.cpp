class RecentCounter {
public:
    queue<int>*q;
    RecentCounter() {
        q=new queue<int>;
    }
    
    int ping(int t) {
        q->push(t);
        if(t-q->front()<=3000){
            return q->size();
        } 
        else{
            while(t-q->front()>3000)
            q->pop();
            return q->size();
        }
    }
};