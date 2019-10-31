if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

inp_list = list(arr)
temp=list()

for num in inp_list:
    if num not in temp:
        temp.append(num)
temp.sort(reverse = True)
print(temp[1])
