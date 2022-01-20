def average(N, n):
    return round(sum(N)//n, 1)

def center(N):
    mid = len(N) // 2
    return N[mid]

def frequency(N):
    number = list(set(N))
    max_fre = []
    max_cnt = 0
    for i in number:
        
        if max_cnt == N.count(i):
            max_fre.append(i)
        elif max_cnt < N.count(i):
            max_fre = []
            max_fre.append(i)
            max_cnt = N.count(i)
    print(max_fre)
    if len(max_fre) > 1:
        max_fre.sort()
        return(max_fre[1])
    else:
        return(max_fre[0])

def arrange(N):
    return (max(N) - min(N))


n = int(input())
li = []
for _ in range(n):
    li.append(int(input()))

li.sort()

print(average(li, n))
print(center(li))
print(frequency(li))
print(arrange(li))