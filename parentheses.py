paren = ['{','}','{']


dict = {}
for i in paren:
    if i in dict:
        dict[i] +=1
    else:
        dict[i] = 1

if dict["{"] == dict["}"]:
    print("All well")
else:
    print("missing")