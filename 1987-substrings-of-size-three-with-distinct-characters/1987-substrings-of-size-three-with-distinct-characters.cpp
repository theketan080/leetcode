class Solution {
public:
    int countGoodSubstrings(string s) {
      int n = s.length();
      /*
      xyzzaz 
      window x
      window y
      window z size 3 computation
      wpis jb z pe aye toh hmare window ke andr abhi ek z hai already toh usse pehle htayenge
      toh ek loop chlayenge jisme hm i ko tbtk bdhayenge jbtk woo z ke count ko 1 nhi kr deta
      */

      unordered_map<char,int>mp;

      int i = 0;
      int j = 0;
      int count = 0;

      while(j < n){

        mp[s[j]]++;

        while(mp[s[j]] > 1){
           mp[s[i]]--;
           if(mp[s[i]] == 0)mp.erase(s[i]);
           i++;
        }

        if(j - i + 1 > 3){
            mp[s[i]]--;
            if(mp[s[i]] == 0)mp.erase(s[i]);
            i++;
        }
       

        if(j-i+1 == 3 && mp.size() == 3){
            count++;
        }
        j++;
      }

      return count;
    }
};