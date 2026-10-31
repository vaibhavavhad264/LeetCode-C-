// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         if(str1.length() < str2.length()){
//             return gcdOfStrings(str2, str1);
//         }
//         else if(!(str1.rfind(str2, 0) == 0)){
//             return "";
//         }
//         else if(str2.empty()){
//             return str1;
//         }
//         else{
//             return gcdOfStrings(str1.substr(str2.length()), str2);
//         }
//     }
// };


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((str1 + str2 != str2 + str1)) return "";
        return (str1.substr(0, gcd(str1.size(), str2.size())));
    }
};