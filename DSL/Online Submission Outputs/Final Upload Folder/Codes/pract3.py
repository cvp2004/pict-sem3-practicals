'''
//============================================================================
// Name        : 21465_Pract3.py
// Author      : Chaitanya Paraskar
// Roll No.    : 21465
// Aim         : Write a python program to compute following computation on matrix:
                a) Addition of two matrices
                b) Subtraction of two matrices
                c) Multiplication of two matrices
                d) Transpose of a matrix
//============================================================================

'''


class Matrix_Op:

    def __init__(self, m1, m2, r, c):
        self.m1 = m1
        self.m2 = m2
        self.r = r
        self. c = c


def add(m1, m2, r, c):
    res = []
    r1 = []
    for i in range(r):
        for j in range(c):
            v = m1[i][j] + m2[i][j]
            r1.append(v)
        res.append(r1)
        r1 = []
    return res


def sub(m1, m2, r, c):
    res = []
    r1 = []
    for i in range(r):
        for j in range(c):
            v = m1[i][j] - m2[i][j]
            r1.append(v)
        res.append(r1)
        r1 = []
    return res


def mult(m1, m2, r, c):
    res = []

    for i in range(0, r):
        row = []
        for j in range(0, c):
            sum_val = 0
            for k in range(0, r):
                sum_val += m1[i][k] * m2[k][j]
            row.append(sum_val)
        res.append(row)

    return res


def trans(m):
    res = [[0]*len(m)]*len(m[0])
    for i in range(len(m)):
        for j in range(len(m[0])):
            res[i][j] = m[j][i]
    return res


r = int(input("Enter No. of rows : "))
c = int(input("Enter No. of columns : "))

m1 = []
m2 = []
r1 = []

print("Enter Matrix elements for Matrix 1 =>")

for i in range(r):
    for j in range(c):
        v = int(input(f"Enter value for row {i + 1} column {j + 1} : "))
        r1.append(v)
    m1.append(r1)
    r1 = []

print(m1)

print("Enter Matrix elements for Matrix 2 =>")

for i in range(r):
    for j in range(c):
        v = int(input(f"Enter value for row {i + 1} column {j + 1} : "))
        r1.append(v)
    m2.append(r1)
    r1 = []

print(m2)

print("Addition of 2 Matrices = ", add(m1, m2, r, c))
print("Subtraction of 2 Matrices = ", sub(m1, m2, r, c))
print("Multiplication of 2 Matrices = ", mult(m1, m2, r, c))
print("Transpose of  Matrix 1 = ", trans(m1))


'''

OUTPUT :

$ python pract3.py
Enter No. of rows : 3
Enter No. of columns : 1
Enter Matrix elements for Matrix 1 =>
Enter value for row 1 column 1 : 1
Enter value for row 2 column 1 : 2
Enter value for row 3 column 1 : 3
[[1], [2], [3]]
Enter Matrix elements for Matrix 2 =>
Enter value for row 1 column 1 : 1
Enter value for row 2 column 1 : 2
Enter value for row 3 column 1 : 3
[[1], [2], [3]]
Addition of 2 Matrices =  [[2], [4], [6]]
Subtraction of 2 Matrices =  [[0], [0], [0]]
Transpose of Matrix 1 = [[3, 2, 1]]

'''
