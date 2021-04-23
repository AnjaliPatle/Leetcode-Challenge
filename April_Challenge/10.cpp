class MinStack {
public:
    /** initialize your data structure here. */
    int min=INT_MAX;
    vector<int>* minst;
    MinStack() {
        minst=new vector<int>;
    }
    
    void push(int x) {
        if(x<min)min=x;
        minst->push_back(x);
    }
    
    void pop() {
        if(minst->size()==0)return;
        if(minst->back()==min){
             minst->pop_back();
            min=INT_MAX;
            for(auto x:*minst){
                if(min>x)min=x;
            }
        }
        else{
        minst->pop_back();
        }
    }
    
    int top() {
        return minst->back();
    }
    
    int getMin() {
        return min;
    }
};
