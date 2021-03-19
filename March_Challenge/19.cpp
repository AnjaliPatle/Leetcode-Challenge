class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<bool>& visited,int i){
        if(visited[i]==true)
            return;
        visited[i]=true;
        for(auto room: rooms[i]){
            dfs(rooms,visited,room);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size(),false);
        dfs(rooms,visited,0);
        for(auto x:visited){
            if(x==false)
                return false;
        }
        return true;
    }
};
