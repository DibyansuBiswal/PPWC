def merge_sorted_arrays(arr1, arr2):
    m, n = len(arr1), len(arr2)
    merged_array = []
    i, j = 0, 0

    while i < m and j < n:
        if arr1[i] < arr2[j]:
            merged_array.append(arr1[i])
            i += 1
        else:
            merged_array.append(arr2[j])
            j += 1


    while i < m:
        merged_array.append(arr1[i])
        i += 1

    
    while j < n:
        merged_array.append(arr2[j])
        j += 1

    return merged_array

arr1 = [1, 3, 5]
arr2 = [2, 4, 6, 8]
merged = merge_sorted_arrays(arr1, arr2)
print("Merged array:", merged)
