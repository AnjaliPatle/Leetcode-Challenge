class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        vector<int>visited(10000,0);
        for(auto x:deadends){
            visited[stoi(x)]=-1;
        }
        
        int ans=0;
        queue<string>q;
        q.push("0000");
        while(!q.empty()){
            int count=q.size();
            for(int j=0;j<count;j++){
                string x=q.front();
                q.pop();
                if(visited[stoi(x)]==-1)
                    continue;
                if(x==target)
                    return ans;
               
                for(int i=0;i<4;i++){
                    char temp=x[i];
                    if(x[i]=='0'){
                        x[i]='9';
                        if(visited[stoi(x)]==0){
                            visited[stoi(x)]=1;
                            q.push(x);
                        }
                    }
                    else{
                        x[i]=(char)(x[i]-1);
                        if(visited[stoi(x)]==0){
                            visited[stoi(x)]=1;
                            q.push(x);
                        }
                    }
                    x[i]=temp;
                }
                for(int i=0;i<4;i++){
                    char temp=x[i];
                    x[i]=(char)((((temp-'0')+1)%10)+'0');
                    if(visited[stoi(x)]==0){
                         visited[stoi(x)]=1;
                            q.push(x);
                    }
                    x[i]=temp;
                }
            }
            ans++;
        }
        return -1;
    }
};
