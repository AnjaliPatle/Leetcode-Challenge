class Solution {
public:
    vector<int> movesToStamp(string S, string T) {
        if (S == T) return {0};
        int sn = S.size(), tn = T.size()-sn+1, i, j;
        vector<int> ans;
        bool tdiff = true, sdiff;
        while (tdiff){
            tdiff=false;
            for (i = 0; i < tn; i++) {
                sdiff=false;
                for (j = 0; j < sn; j++){
                    if (T[i+j] == '*') continue;
                    else if (T[i+j] != S[j]) break;
                    else sdiff = true;
                }
                if (j ==sn && sdiff) {
                    tdiff=true;
                    for (j = i; j < sn + i; j++)
                        T[j] = '*';
                    ans.push_back(i);
                }
            }
        }
        for (i = 0; i < T.size(); i++) if (T[i] != '*') return {};
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
