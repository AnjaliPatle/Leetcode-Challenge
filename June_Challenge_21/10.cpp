class MyCalendar {
public:
    set<pair<int,int>>cal;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        pair<int,int>bef,after;
        bef={-1,-1};
        after={-1,-1};
        for(auto x:cal){
            if(x.first>start){
                after=x;
                break;
            }
            bef=x;
        }
  
        if(bef.first==-1){
            if(after.first==-1){
                cal.insert({start,end});
                return true;
            }
            if(after.first>=end){
                cal.insert({start,end});
                return true;
            }
            else return false;
        }
        else if(after.first==-1){
            if(start>=bef.second){
                cal.insert({start,end});
                return true;
            }
            else return false;
        }
        else{
            if(start>=bef.second && end<=after.first){
                cal.insert({start,end});
                return true;
            }
            else return false;
        }
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
