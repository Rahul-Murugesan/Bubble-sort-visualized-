from os import system
from sort import bsort
from visualizer import visualizer


inp = [8, 4, 25, 20, 13, 14, 10]
print("Original array:")
visualizer(inp)

bsort(inp)

system("clear")
print("Sorted array:")
visualizer(inp)
