from collections import defaultdict


class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        res = defaultdict(list)
        for string in strs:
            stringS = "".join(sorted(string))
            res[stringS].append(string)
        return (list(res.values()))


Solution.groupAnagrams(1, ["act", "pots", "tops", "cat", "stop", "hat"])
