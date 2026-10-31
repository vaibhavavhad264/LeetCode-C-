class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        for(char x : address){
            if(x == '.') str += "[.]";
            else str += x;
        }
        return str;
    }
};