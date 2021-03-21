class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>c;
    unordered_map<string,pair<int,int>>time;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        c[id]=make_pair(stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        time[c[id].first+stationName].second+=t-c[id].second;
        time[c[id].first+stationName].first++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        return time[startStation+endStation].second/double(time[startStation+endStation].first);
    }
};
