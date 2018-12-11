def eval(v,k):
    ret = 0
    i = 0
    temp = v // ( int(pow(k,i)) )
    while temp!=0 and (v // temp) > 0 :
        ret = ret + temp
        i+=1
        temp = v // ( int(pow(k,i)) )
    return ret
n , k = [int(ele) for ele in input().split()]
v = n-(n//k)
temp = eval(v,k)
while temp < n:
    v+=1
    temp = eval(v,k)
print(v)