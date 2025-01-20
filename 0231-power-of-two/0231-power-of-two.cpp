class Solution {
public:
    bool recurr(int n)
        {   bool op;
            if (n==1)
            {
            return true;
            }
            
            
            else if (n%2 == 0)
            {

                n = n/2;
                if (n==0){
                    return true;
                }
                else
                {
                     op = recurr(n);
                     return op;

                }
                   

                }
            
            else
            {
                return false;
            }
            

        }

    bool isPowerOfTwo(int n) {
        if(n==0)
            {
                return false;
            }
        
           return recurr(n);
        
        
    }
};