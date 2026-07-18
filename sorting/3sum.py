class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        listAns = set()
        for i in range(0, len(nums)):
            hashSet = set()
            for j in range(i+1, len(nums)):
                third = -(nums[i]+nums[j])
                if third in hashSet:
                    temp = [nums[i], nums[j], third]
                    temp.sort()
                    listAns.add(tuple(temp))                   
                hashSet.add(nums[j])
        return list(listAns)