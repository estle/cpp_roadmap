n, c, d = map(int, input().split())
a = list(map(int, input().split()))
cnt = 0
ans, li = [], []
for i in range(n):
    li.append([a[i], i])
    if a[i] < 0:
        cnt += 1
    ans.append(0)
li = sorted(li, key=lambda x: abs(x[0]))
for i in range(c):
    if cnt % 2 == 0:
        if li[0][0] >= 0:
            li[0][0] -= d
            if li[0][0] < 0:
                cnt += 1
        else:
            li[0][0] += d
            if li[0][0] >= 0:
                cnt -= 1
    else:
        if li[0][0] < 0:
            li[0][0] -= d
        else:
            li[0][0] += d
    li = sorted(li, key=lambda x: abs(x[0]))

for i in range(n):
    ans[li[i][1]] = li[i][0]
print(*ans)