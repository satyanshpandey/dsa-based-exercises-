

def union(arr1,arr2):
    uni = []
    for i in arr1:
        uni.append(i)
    for i in arr2:
        if i in uni:
            continue
        else:
            uni.append(i)
    return uni


arr1 = [1,2,3,4]
arr2 = [2,3,4,5]
print(union(arr1,arr2))


