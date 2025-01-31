class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int candy: candies){
            if(candy + extraCandies >= *max_element(candies.begin(), candies.end())){
                result.push_back(true);
            }
            else{
                result.push_back(false);}
        }
        return result;

        
    }
};