class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int count=0;
        for(i=0;i<s.length()-1;i++){
            if(s[i]=='I'){
                if(s[i+1]=='X'){
                    count+=9;
                    i++;
                }
                else if(s[i+1]=='V'){
                    count+=4;
                    i++;
                }
                else count+=1;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    count+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    count+=90;
                    i++;
                }
                else count+=10;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    count+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    count+=900;
                    i++;
                }
                else count+=100;
            }
            else if(s[i]=='V')count+=5;
            else if(s[i]=='L')count+=50;
            else if(s[i]=='D')count+=500;
            else count+=1000;
        }
        if(i!=s.length()){
        switch(s[i]){
            case 'I':count+=1;
                break;
            case'X':count+=10;
                break;
            case'V':count+=5;
                break;
            case'L':count+=50;
                break;
            case'C':count+=100;
                break;
            case'D':count+=500;
                break;
            case'M':count+=1000;
                break;
        }  
        }
        return count;
    }
};
