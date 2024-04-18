class Solution:
    def largestOddNumber(self, num: str) -> str:
        res = ""
        tmpres = ""

        for digit in num:
            tmp = int(digit)
            tmpres += digit
            if(tmp % 2 != 0):
                res = tmpres

        return res