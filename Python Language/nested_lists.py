students = list()

N = int(input())

if N < 2 or N > 5:
    exit()

for i in range(N):
    students.append([])
    name = input()
    score = float(input())
    students[i].append(name)
    students[i].append(score)

students.sort(key = lambda x: x[1])

temp = list()
for i in students:
    if i[1] not in temp:
        temp.append(i[1])

names = list()

for item in students:
    if item[1] == temp[1]:
        names.append(item[0])

names.sort()

for item in names:
    print(item)
