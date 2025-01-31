class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        bool left_empty;
        bool right_empty;

        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed.at(i)==0){
                if(i==0 || flowerbed[i-1]==0){
                    left_empty = true;
                }
                else{
                    left_empty = false;
                }

                if(i==flowerbed.size()-1 || flowerbed[i+1]==0){
                    right_empty= true;
                }
                else{
                    right_empty = false;
                }

                if(left_empty && right_empty){
                    count++;
                    flowerbed[i]=1;

                }

                if(count>=n){
                    return true;
                }

            }
        }
        return (count>=n);
        
    }
};