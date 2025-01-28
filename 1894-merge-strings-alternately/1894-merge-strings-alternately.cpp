class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge="";
        
        for(int i=0; i<max(word1.length(),word2.length());i++){
            if(i<word1.length())
            {
                merge.push_back(word1[i]);
            }
            if(i<word2.length()){
                merge.push_back(word2[i]);
            }
            
        }
        return merge;
    }
};