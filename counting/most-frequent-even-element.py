class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        count = {}
        for num in nums:
            if num%2 == 0:
                if num in count:
                    count[num] +=1
                else:
                    count[num] = 1
        maxKEY = 0
        maxValue = -1
        for key, value in count.items():
            if value > maxValue:
                maxValue = value
                maxKey = key
            elif maxValue == value and key<maxKey:
                maxValue = value
        return maxValue
        