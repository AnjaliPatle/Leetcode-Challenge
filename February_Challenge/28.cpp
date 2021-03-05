class FreqStack {
public:
    unordered_map<int,int>f;
    unordered_map<int,stack<int>>mst;
    int fmax;
    FreqStack() {
        fmax=0;
    }
    
    void push(int x) {
        f[x]++;
        fmax=max(fmax,f[x]);
        mst[f[x]].push(x);
   }
    
    int pop() {
       if(fmax<0)return -1;
        int top=mst[fmax].top();
        mst[fmax].pop();
        f[top]--;
        if(mst[fmax].size()==0){
            mst.erase(fmax);
            fmax--;
        }
        return top;
    }
};
