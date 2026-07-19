class Solution:
    def minimumSum(self, nums: List[int]) -> int:
        n = len(nums)

        # leftMin[i] = minimum value from nums[0...i]
        leftMin = [0] * n
        leftMin[0] = nums[0]

        for i in range(1, n):
            leftMin[i] = min(leftMin[i - 1], nums[i])

        # rightMin[i] = minimum value from nums[i...n-1]
        rightMin = [0] * n
        rightMin[n - 1] = nums[n - 1]

        for i in range(n - 2, -1, -1):
            rightMin[i] = min(rightMin[i + 1], nums[i])

        ans = float("inf")

        for j in range(1, n - 1):
            if leftMin[j - 1] < nums[j] and rightMin[j + 1] < nums[j]:
                ans = min(ans, leftMin[j - 1] + nums[j] + rightMin[j + 1])

        return -1 if ans == float("inf") else ans
        