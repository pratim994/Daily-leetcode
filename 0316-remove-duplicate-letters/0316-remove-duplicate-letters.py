class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        
        mydict = {}
        ans = []

        for i, c in enumerate(s):
            mydict[c] = i

        for index, value in enumerate(s):

            if value in ans:
                continue

            while ans and ans[-1] > value and index < mydict[ans[-1]]:
                ans.pop()

            ans.append(value)

        return "".join(ans)