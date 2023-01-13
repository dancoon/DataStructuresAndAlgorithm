def binary_search(list, item):
    beg = 0
    end = len(list) - 1
    while beg <= end:
        mid = (end + beg) // 2
        if list[mid] == item:
            return mid
        elif list[mid] < item:
            beg = mid + 1
        else:
            end = mid - 1
    return None
