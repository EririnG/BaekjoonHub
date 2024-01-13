a=[]
for i in range(0,9) :
    a.insert(i,int(input()))
max = a[0]
maxindex = 1
for i in range(0,9):
    if i == 8:
        break
    if max<a[i+1]:
        max = a[i+1]
        maxindex = i+2
  
print(max)
print(maxindex)
