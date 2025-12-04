no = [1,2,3,4,5,6,7,8,10]

for i in range(len(no)):
    if no[i]+1 != no[i+1]:
        print(no[i]+1)