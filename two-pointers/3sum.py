class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        """This was the optimal approach for the code, but using the Two pointer approach, 
        we take three pointer i, j ,k and sorted the array first, after that i =0, j=i+1 and k = n-1.
        if sum <0 we will move J forward, 
        if sum > 0 we will move k backward or toward the j,
        else we know it is the triplet, so we will add on the value in the listAns, and move both j and k till they are not eqaul to their previous value and for.
        then when i++ then, we will also move i to the place where it is not equal to it's previosu value"""
        listAns = []
        nums.sort()
        for i in range(0,len(nums)):
            if i>0 and nums[i]==nums[i-1]: #this line should skip the duplicates
                continue
            j = i+1
            k = len(nums)-1
            while j<k:
                SUMD = nums[i]+nums[j]+nums[k]
                if SUMD<0:
                    j+=1
                elif SUMD>0:
                    k-=1
                else:
                    temp = [nums[i], nums[j], nums[k]]
                    listAns.append(temp)
                    j+=1
                    k-=1
                    while(j < k and nums[j]==nums[j-1]): j+=1
                    while(j<k and nums[k]==nums[k+1]): k-=1
        return listAns 
                """This was the brute force approach for this question. by the help of the striver, the time complexity is O(n^3 + nlogn) and space complexity was 3*O(no of triplets)"""
        # ans=set()
        # n = len(nums)
        # for i in range(0, n):
        #     for j in range(i+1,n-1):
        #         k=j+1
        #         if (nums[i]+nums[j]+nums[k]==0):
        #             listAns = [nums[i], nums[j], nums[k]]
        #             listAns.sort()
        #             ans.add(tuple(listAns))
        #         k+=1
        # return list(ans)

        """Better Approach: this appraoch is done by using the hash-set, and the concept of the math 
        nums[k] = -(nums[i]+nums[j]) """
        # listAns = set()
        # for i in range(0, len(nums)):
        #     hashSet = set()
        #     for j in range(i+1, len(nums)):
        #         third = -(nums[i]+nums[j])
        #         if third in hashSet:
        #             temp = [nums[i], nums[j], third]
        #             temp.sort()
        #             listAns.add(tuple(temp))                   
        #         hashSet.add(nums[j])
        # return list(listAns)
                     
