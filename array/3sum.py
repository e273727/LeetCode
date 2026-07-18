class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        ans=set()
        n = len(nums)
        for i in range(0, n):
            for j in range(i+1,n-1):
                k=j+1
                if (nums[i]+nums[j]+nums[k]==0):
                    listAns = [nums[i], nums[j], nums[k]]
                    listAns.sort()
                    ans.add(tuple(listAns))
                k+=1
        return list(ans)

        