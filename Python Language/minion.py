def minion_game(string):
    # your code goes here
    stuart = 0
    kevin = 0
    n = len(string)
    for i in range(n):
        if string[i] in ('A', 'E', 'I', 'O', 'U'):
            kevin += n - i
        else:
            stuart += n - i
    if kevin > stuart:
        print('Kevin', kevin)
    elif stuart > kevin:
        print('Stuart', stuart)
    else:
        print('Draw')

if __name__ == '__main__':
    s = input()
    minion_game(s)
