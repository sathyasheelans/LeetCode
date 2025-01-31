class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        max_a = max(candies)
        for i in range(len(candies)):
            if extraCandies+candies[i]>=max_a:
                result.append(True)
            else:
                result.append(False)
        return result