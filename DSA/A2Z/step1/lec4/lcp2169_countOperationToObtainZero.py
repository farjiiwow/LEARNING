# TC -> O(Log(Min(Num1,Num2)))
# SC -> O(1)

class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        count = 0
        while num1 > 0 and num2 > 0:
            if num2 >= num1:
                num2 = num2 - num1
            else:
                num1 = num1 - num2
            count = count + 1
        return count