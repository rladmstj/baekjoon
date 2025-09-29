a, b = map(int, input().split())
seta = set()
setb = set()
for c in input().split():
    seta.add(int(c))
for c in input().split():
    setb.add(int(c))

# print(seta, setb)
print(len(seta-setb)+len(setb-seta))
