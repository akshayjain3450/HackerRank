N = int(input())

dict = {}

for i in range(N):
    id,mark1,mark2,mark3 = input().split()
    marks = [float(mark1),float(mark2),float(mark3)]
    dict[id] = marks

name = input()

new_lst = dict.get(name)
total = new_lst[0] + new_lst[1] + new_lst[2]
avg = total/3
print(f'{avg:.2f}')
