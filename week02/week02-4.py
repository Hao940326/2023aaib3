class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        h1={}
        for c in s:
            if c in h1:
                h1[c] +=1
            else:
                h1[c] = 1 
        print(h1)

        for c in t:
            if c not in h1:
                return c
            if h1[c] == 0:
                return c
            else:
                h1[c] -= 1
        return ""