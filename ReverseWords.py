string = input("Enter the string")

wordlist = string.split(" ")

for i in range(len(wordlist)):
    wordlist[i] = wordlist[i][::-1]

print(wordlist)
    