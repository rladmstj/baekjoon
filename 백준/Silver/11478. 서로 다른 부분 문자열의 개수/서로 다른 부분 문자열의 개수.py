strn = input()
se = set()
for i in range(1, len(strn)+1):
    for j in range(len(strn)-i+1):
        se.add(strn[j:j+i])


print(len(se))
