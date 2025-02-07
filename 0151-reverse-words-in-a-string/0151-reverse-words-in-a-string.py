
class Solution:
    def reverseWords(self, s: str) -> str:
        or_S = s.split()
        return_s = []
        
        i = len(or_S)-1
        while(i>=0):
            
            return_s.append(or_S[i])
            if i > 0:
                return_s.append(" ")
            i -= 1


        return "".join(return_s)   