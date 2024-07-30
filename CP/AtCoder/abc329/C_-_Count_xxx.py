N = int(input())
S = input()

from collections import defaultdict
from itertools import groupby

d = defaultdict(int)
for c, g in groupby(S):
    d[c] = max(d[c], len(list(g)))
print(sum(d.values()))