

def move(arr):
    l = 0
    m = 0
    h = len(arr)-1
    while(m<=h):
        if(arr[m]<0): # it means it is -ve
            arr[h],arr[m]=arr[m],arr[h]
            h-=1
        if(arr[m]>0):
            m+=1
            
    return arr
            


arr = [-1,1,2,-3,-3,-1]
print(move(arr))
