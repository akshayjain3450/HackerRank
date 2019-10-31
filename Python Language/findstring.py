def count_substring(string, sub_string):
    len_sub_string = len(sub_string)
    count = 0
    while(1):
        index = string.find(sub_string)
        if index == -1:
            break
        else:
            count = count + 1
            string = string[index+1:]
    return count
