class Solution {
public:
    bool checkString(string s) {
        int cn=0;
        for(auto ch: s){
            if(ch=='b'){
                cn=1;
            }
            if(cn==1 && ch=='a'){
                return false;
            }
        }
        return true;
    }
};