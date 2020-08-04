x = input().split(' ')
template = input()
arr = []
for i in x:
    arr.append(int(i))
arr.sort()
for i in template:
    if i== 'A':
        print(arr[0],end=' ')
    elif i== 'B':
        print(arr[1],end=' ')
    else :
        print(arr[2],end=' ')