from time import sleep
from colored import fg


def visualizer(data,point1 = -1,point2 = -1):
    Max = max(data)
    for i in range(Max):
        for j in range(len(data)):
            color = fg("white")
            if((Max-data[j]) <= i):
                if(j == point1):
                    color = fg("green")
                elif(j == point2):
                    color = fg("red")
                print(color+"|", end = " ")
            else:
                print(" ", end = " ")
        print()
    print(fg("blue")+"____________________________________________")
    sleep(2.5)