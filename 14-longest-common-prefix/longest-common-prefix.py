def chkCommonPart(str1: str, str2: str) -> str: # make sure n1 > n2
        n1 = len(str1)
        n2 = len(str2)
        result = ""

        for i in range(n1):
                if(i < n2):
                    if (str1[i] == str2[i]):
                        result += str1[i]
                    else:
                        break
                else:
                    break

        return result

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        n = len(strs)
        result = ""
        if n == 1:
            return strs[0]
        
        result = chkCommonPart(strs[0], strs[1])
        
        for i in range(2, n):
            #print("actual string --" , arr[i])
            tmp = chkCommonPart(strs[i], result)
            print(tmp)
            if len(result) == 0:
                result = tmp
            elif (len(tmp) < len(result)):
                result = tmp

        return result

        