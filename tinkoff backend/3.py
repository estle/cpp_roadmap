n = int(input())
arr = list(map(int, input().split()))
m = int(input())

flag = False
mas = [-1 for _ in range(n+1)]
mas[0] = 0

for i in range(1, n):
    
    if flag == False and arr[i] < arr[i - 1]: # смена флага, элементы невозрастают
        mas[i] = mas[i - 1]
        flag = True
    elif flag and arr[i] > arr[i - 1]: # элементы снова начинают неубывать, нужно рассмотреть гранич случай
        mas[i] = i - 1
        flag = False
    else: # в самом начале элементы неубывают, и когда происходит просто невозраст / неубыв
        mas[i] = mas[i - 1]

# print(mas)

for i in range(m):
    start, end = map(int, input().split())
    if mas[end - 1] <= start - 1:
        print("YES")
    else:
        print("NO")