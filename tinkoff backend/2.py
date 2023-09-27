n, k = map(int, input().split())
p = input()

m = {c:p.count(c) for c in p}
a = []
for key in m.keys():
    a.append(m[key])
a.sort()
# print(a)
i = 0
n = len(a)
while i < n and k >= a[i]:
    k -= a[i]
    i += 1
print(n-i)