class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        l1=len(word1)
        l2=len(word2)
        result=[]

        for w1, w2 in zip(word1, word2):
            result.append(w1)
            result.append(w2)
        
        if l1>l2:
            result.append(word1[len(word2):])
        else:
            result.append(word2[len(word1):])


        
        return "".join(result)
            