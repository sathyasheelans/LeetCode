class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        len1=len(str1)
        len2=len(str2)

        if str1+str2 != str2+str1:
            return ""

        gcdlength= gcd(len1,len2)
        return str1[:gcdlength]
        