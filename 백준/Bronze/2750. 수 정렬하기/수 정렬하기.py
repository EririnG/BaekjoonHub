def bubble_sort(num_list = list):
    for i in range(len(num_list)-1):
        for j in range(len(num_list)-1,i ,-1):
            if num_list[j]< num_list[j-1]:
                num_list[j], num_list[j-1] = num_list[j-1], num_list[j]


test_case = int(input())
a = []
for i in range(test_case):
    a.append(int(input()))
bubble_sort(a)
for i in a:
    print(i) 