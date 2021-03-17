class Solution {
public:
    double x,y,r;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    vector<double> randPoint() {
        vector<double>result(2);
        result[0] = x+r;
        result[1] = y+r;
        while((result[0]-x)*(result[0]-x) + (result[1]-y)*(result[1]-y)>(r*r)){
            result[0] = (double)rand()/RAND_MAX*(2*r)+x-r;
            result[1] = (double)rand()/RAND_MAX*(2*r)+y-r;
        }
        
        return result;
    }
};
