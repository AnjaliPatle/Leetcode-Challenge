
class NestedIterator {
public:
    stack<NestedInteger>ns;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i=nestedList.size()-1;i>=0;i--)
            ns.push(nestedList[i]);
    }
    
    int next() {
        auto top=ns.top();
        ns.pop();
        return top.getInteger();
    }
    
    bool hasNext() {
        while(!ns.empty()){
            if(ns.top().isInteger())
                return true;
            auto x=ns.top().getList();
            ns.pop();
            for(int i=x.size()-1;i>=0;i--){
                ns.push(x[i]);
            }
        }
        return false;
    }
};
