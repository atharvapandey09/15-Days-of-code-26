// sort character by frequency


class Solution {
public:
    void func(string* s,int n , char c){
        while(n--){
            (*s).push_back(c);
        }
    }
    string frequencySort(string s) {
        string str = "";
        unordered_map<char, int> mp;
        for(auto c: s){
            mp[c]++;

        }
        multimap<int, char> hash;
        for(auto k: mp){
            hash.insert({k.second,k.first});
        }
        for(int i= s.size();i>0;i--){
            if(hash.find(i)!=hash.end()){
                auto range = hash.equal_range(i);
                for(auto it= range.first;it!=range.second;it++){
                    func(&str,i,it->second);
                }
            }
        }
        return str;

    }
};