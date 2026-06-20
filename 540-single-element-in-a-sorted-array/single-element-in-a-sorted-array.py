class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        left=1
        right=len(nums)-2
        if len(nums)==1:
            return nums[0]
        elif nums[0]!=nums[1]:
            return nums[0]
        elif nums[-1]!=nums[-2]:
            return nums[-1]
        while left<=right:
            mid=(left+right)//2
            if nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]:
                return nums[mid]
            
            if (mid%2==0 and nums[mid]==nums[mid+1]) or (mid%2==1 and nums[mid]==nums[mid-1]):
                left=mid+1
            else:
                right=mid-1
        
        
        return -1


        