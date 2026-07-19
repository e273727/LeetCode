class Solution:
    def minimumSum(self, nums: List[int]) -> int:
        sumM = 1000
        for i in range(0,len(nums)):
            j=i+1
            while j<len(nums):
                k=j+1
                while k<len(nums):
                    minSum = nums[i]+nums[j]+nums[k]
                    if nums[i]<nums[j] and nums[k]<nums[j]:
                        if minSum < sumM:
                            sumM = minSum
                    k+=1
                j+=1
        return -1 if sumM==1000 else sumM

