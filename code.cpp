class Solution {
public:

    int foundpart(string s, string part){
        int i=0;
        int len=s.length();
        while(i<len){
            if(s.find( part)!=string::npos){
                return s.find(part);
            }
            i++;
        }
        return -1;
    }

    string removeOccurrences(string s, string part) {
        int i=0;
        int len=s.length();
        int plen= part.length();
    
        while(i<len){
            if(foundpart(s, part)!= -1){
                s.erase(foundpart(s, part), plen);
            }
            i++;
        }
        return s;
    }
};
