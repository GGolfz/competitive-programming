a,b = input().split(' ')
a = int(a)
b = int(b)
g = 1
for i in range(1,max(a,b)+1):
    if a% i == 0 and b%i==0:
        g = i
print(g)