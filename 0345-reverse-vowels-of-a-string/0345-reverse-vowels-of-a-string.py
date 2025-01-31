class Solution:
    def reverseVowels(self, s: str) -> str:

        vowels={'A','a','E','e','I','i','O','o','U','u'}
        list_s = list(s)
        s_r=[]
        left=0
        right=len(list_s)-1
        temp_left = False
        temp_right = False

        i= len(s)-1

        while(True):

            if left>=right:
                break
                
            if list_s[left] in vowels:
                temp_left= True
            else:
                left += 1
            
            if list_s[right] in vowels:
                temp_right= True
            else:
                right -= 1
            
            if temp_left and temp_right:
                temp = list_s[left]
                list_s[left] = list_s[right]
                list_s[right] = temp
                left += 1
                right -= 1
                temp_left = False
                temp_right= False

        
        return "".join(list_s)
        