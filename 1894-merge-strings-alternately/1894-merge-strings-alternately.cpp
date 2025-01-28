class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        merge.reserve(word1.length() + word2.length());

        for(int i=0; i<max(word1.length(),word2.length());i++){
            if(i<word1.length())
            {
                merge += word1[i];
            }
            if(i<word2.length()){
                merge += word2[i];
            }
            
        }
        return merge;
    }
};