class Solution:
    def twoSum(self, a, k):
        n = len(a)
        mpp = {}
        for i in range(n):
            num = a[i]
            x = k - num
            if x not in mpp:
                mpp[num] = i
            else:
                return [mpp[x], i]
        return [-1, -1]


        