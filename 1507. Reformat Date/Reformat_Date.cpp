class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string>m{{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"}, {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"}};
        string ans;
        if(date.length() == 13)
            ans  = date.substr(9,4) + '-' + m[date.substr(5,3)] + '-' + date.substr(0,2);
        else
            ans  = date.substr(8,4) + '-' + m[date.substr(4,3)]  +  '-' + '0' + date.substr(0,1); 
        return ans;
    }
};
