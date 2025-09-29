inputs = input()
i = 0
tl = ['c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
thrl = ['dz=']
sum = 0
while i < len(inputs):
    if inputs[i:i+2] in tl:
        i += 2
    elif inputs[i:i+3] in thrl:
        i += 3
    else:
        i += 1
    sum += 1
print(sum)
