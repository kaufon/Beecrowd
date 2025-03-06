class Solution:
    def encode(self, strs: list[str]) -> str:
        res = ""
        if not strs:
            return ""
        for s in strs:
            res += str(len(s)) + "#" + s
        return res

    def decode(self, s: str) -> list[str]:
        res = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != "#":
                j += 1
            length = int(s[i:j])
            i = j+1
            j = i + length
            res.append(s[i:j])
            i = j


Solution.encode(1, [""])
Solution.decode(1, "")
