n = int(input())
new_list = input().split()

for i in range(n):
    new_list[i] = int(new_list[i])

new_tuple = tuple(new_list)

print(hash(new_tuple))
