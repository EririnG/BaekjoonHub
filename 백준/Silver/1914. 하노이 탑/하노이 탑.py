def move(n,ari,des):
    if n>1:
        move(n-1,ari,6-ari-des)
    print(ari, des)
    if n>1:
        move(n-1,6-ari-des,des)

pan = int(input())
print(2**pan-1)
if pan<= 20:
    move(pan,1,3)


