

def ssrt(arr):
    l = 0
    m = 0
    h = len(arr)-1
    print(h)
    while(m<=h):
        if(arr[m]==0):
            arr[l],arr[m] = arr[m],arr[l]
            m+=1
            l+=1
        elif(arr[m]==1):
            m+=1
        elif(arr[m]==2):
            arr[h],arr[m]=arr[m],arr[h]
            h-=1
            
    return arr

arr = [0,1,2,0,1,2]
# ssrt(arr)
print(ssrt(arr))
