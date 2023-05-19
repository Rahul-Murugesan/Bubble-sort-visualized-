from os import system
from visualizer import visualizer


def bsort(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-i-1):
            system("clear")
            print("comparing", arr[j], "with", arr[j+1])
            visualizer(arr, j, j+1)
            if(arr[j] > arr[j+1]):
                arr[j+1], arr[j] = arr[j], arr[j+1]
                system("clear")
                print("comparing", arr[j], "with", arr[j+1], "-> Swapped")
                visualizer(arr, j+1, j)
    return arr
