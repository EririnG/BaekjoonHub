import sys

nine=[]
for i in range(9):
    nine.append(int(sys.stdin.readline()))

for i in range(len(nine)):
    for j in range(i+1,len(nine)):
        if sum(nine)-(nine[i]+nine[j]) == 100:
            tmp1 = nine[i]
            tmp2 = nine[j]

nine.remove(tmp1)
nine.remove(tmp2)


        
print('\n'.join(map(str,sorted(nine))))
