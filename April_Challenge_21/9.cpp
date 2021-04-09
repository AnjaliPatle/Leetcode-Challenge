class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int arr[26];
        for(int i=0;i<order.size();i++){
            arr[order[i]-'a']=i;
        }
        for(int i=0;i<words.size()-1;i++){
            if(arr[words[i][0]-'a']>arr[words[i+1][0]-'a'])return false;
            if(arr[words[i][0]-'a']==arr[words[i+1][0]-'a']){
                int j=1,flag=0;
                while(j<min(words[i].size(),words[i+1].size())){
                    if(arr[words[i][j]-'a']>arr[words[i+1][j]-'a'])return false;
                    else if(arr[words[i][j]-'a']<arr[words[i+1][j]-'a']){
                        flag=1;
                        break;
                    }
                    j++;
                }
                 if(flag==0&&words[i].size()>words[i+1].size()) return false;
        }
        }
        return true;
    }
};
