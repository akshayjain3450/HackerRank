N = int(input())
if N % 2 == 1:
    print("Weird")
else:
    if N>1 and N<6:
        print("Not Weird")
    if N>5 and N<21:
        print("Weird")
    if N>20:
        print("Not Weird")
