class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>ans;
        sort(products.begin(),products.end());
        int n=products.size();
        string pre;
        for(auto x:searchWord){
            pre+=x;
            int ind=lower_bound(products.begin(),products.end(),pre)-products.begin();
            
            vector<string>temp;
            for(int i=ind;i<min(ind+3,n);i++)
                if(products[i].substr(0,pre.length())==pre)
                    temp.push_back(products[i]);
            ans.push_back(temp);
        }
        
        return ans;
    }
};
