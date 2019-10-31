new_list = []

N = int(input())

for i in range(N):
    command = input().split()
    if command[0] == "insert":
        index = int(command[1])
        value = int(command[2])
        new_list.insert(index,value)
    elif command[0] == "remove":
        value = int(command[1])
        new_list.remove(value)
    elif command[0] == "append":
        value = int(command[1])
        new_list.append(value)
    elif command[0] == "sort":
        new_list.sort()
    elif command[0] == "pop":
        new_list.pop()
    elif command[0] == "reverse":
        new_list.reverse()
    elif command[0] == "print":
            print(new_list)
