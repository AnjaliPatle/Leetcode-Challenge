class Solution {
public:
    float dist(vector<int>p1,vector<int>p2){
        return sqrt(((p1[0]-p2[0])*(p1[0]-p2[0]))+((p1[1]-p2[1])*(p1[1]-p2[1])));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        map<float,int>sides;
        sides[dist(p1,p2)]++;
        sides[dist(p2,p3)]++;
        sides[dist(p3,p4)]++;
        sides[dist(p4,p1)]++;
        sides[dist(p1,p3)]++;
        sides[dist(p2,p4)]++;
        if((*sides.begin()).second==4){
            return true;
        }
        return false;
    }
};