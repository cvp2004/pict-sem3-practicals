
'''
//============================================================================
// Name        : 21465_Pract5.py
// Author      : Chaitanya Paraskar
// Roll No.    : 21465
// Aim         : Write a python program to store second year percentage of students in array.
                 Write function for sorting array of floating point numbers in ascending order using-
                 a) Insertion sort
                 b) Shell Sort 
                 and display top five scores
//============================================================================

'''


class Array:

    def __init__(self):
        self.n = int(input("Enter Total No. of elements in Array : "))
        self.arr = [-1] * self.n

        for i in range(0, self.n):
            e = int(input(f"Enter {i}th element : "))
            self.arr[i] = e

        print(f"Entered array = {self.arr}")
        self.selectionSort()

    def bubbleSort(self):
        swap = False
        i = 0

        while i < self.n-1:
            j = 0
            while j < self.n - i - 1:
                if self.arr[j] > self.arr[j+1]:
                    temp = self.arr[j]
                    self.arr[j] = self.arr[j+1]
                    self.arr[j+1] = temp
                    swap = True
                j = j+1

            print(f"array after pass {i+1} : {self.arr}")

            if not swap:
                break

            i = i+1

        print(f"Sorted Array : {self.arr}")

        return

    def selectionSort(self):
        swap = False
        for i in range(self.n):

            min_idx = i

            for j in range(i+1, self.n):
                if self.arr[min_idx] > self.arr[j]:
                    min_idx = j
                    swap = True

            self.arr[i], self.arr[min_idx] = self.arr[min_idx], self.arr[i]

            if not swap:
                break

            print(f"array after pass {i+1} : {self.arr}")

        print(f"Sorted Array : {self.arr}")

    def insertionSort(self):
        i = 0

        while i < self.n-1:

            if self.arr[i] > self.arr[i+1]:

                temp = self.arr[i]
                self.arr[i] = self.arr[i+1]
                self.arr[i+1] = temp

                j = i

                while j > 0:

                    if self.arr[j] < self.arr[j-1]:

                        temp = self.arr[j]
                        self.arr[j] = self.arr[j-1]
                        self.arr[j-1] = temp

                        j = j-1
                    else:
                        break
            i = i+1
            print(f"array after pass {i} : {self.arr}")

        print(f"Sorted Array : {self.arr}")

    def ShellSort(self):
        gap = self.n//2

        while gap > 0:
            j = gap
            while j < self.n:
                i = j-gap
                while i >= 0:
                    if self.arr[i+gap] > self.arr[i]:

                        break
                    else:
                        self.arr[i+gap], self.arr[i] = self.arr[i], self.arr[i+gap]

                    i = i-gap
                print(f"array after pass : {self.arr}")
                j += 1
            gap = gap//2

        print(f"Sorted Array : {self.arr}")


a = Array()


'''

OUTPUT 

INSERTION SORT :

$ python pract5.py
Enter Total No. of elements in Array : 5
Enter 0th element : 5
Enter 1th element : 4
Enter 2th element : 3
Enter 3th element : 2
Enter 4th element : 1
Entered array = [5, 4, 3, 2, 1]
array after pass 1 : [4, 5, 3, 2, 1]
array after pass 2 : [3, 4, 5, 2, 1]
array after pass 3 : [2, 3, 4, 5, 1]
array after pass 4 : [1, 2, 3, 4, 5]
Sorted Array : [1, 2, 3, 4, 5]


BUBBLE SORT : 

$ python pract5.py
Enter Total No. of elements in Array : 5
Enter 0th element : 5
Enter 1th element : 4
Enter 2th element : 3
Enter 3th element : 2
Enter 4th element : 1
Entered array = [5, 4, 3, 2, 1]
array after pass 1 : [4, 3, 2, 1, 5]
array after pass 2 : [3, 2, 1, 4, 5]
array after pass 3 : [2, 1, 3, 4, 5]
array after pass 4 : [1, 2, 3, 4, 5]
Sorted Array : [1, 2, 3, 4, 5]


SHELL SORT :

$ python pract5.py
Enter Total No. of elements in Array : 5
Enter 0th element : 5
Enter 1th element : 4
Enter 2th element : 3
Enter 3th element : 2
Enter 4th element : 1
Entered array = [5, 4, 3, 2, 1]
array after pass : [3, 4, 5, 2, 1]
array after pass : [3, 2, 5, 4, 1]
array after pass : [1, 2, 3, 4, 5]
array after pass : [1, 2, 3, 4, 5]
array after pass : [1, 2, 3, 4, 5]
array after pass : [1, 2, 3, 4, 5]
array after pass : [1, 2, 3, 4, 5]
Sorted Array : [1, 2, 3, 4, 5]

OUTPUT SELECTION SORT :

$ python pract5.py
Enter Total No. of elements in Array : 5
Enter 0th element : 5
Enter 1th element : 4
Enter 2th element : 3
Enter 3th element : 2
Enter 4th element : 1
Entered array = [5, 4, 3, 2, 1]
array after pass 1 : [1, 4, 3, 2, 5]
array after pass 2 : [1, 2, 3, 4, 5]
array after pass 3 : [1, 2, 3, 4, 5]
array after pass 4 : [1, 2, 3, 4, 5]
array after pass 5 : [1, 2, 3, 4, 5]
Sorted Array : [1, 2, 3, 4, 5]

'''
