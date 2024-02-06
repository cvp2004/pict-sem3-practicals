'''
//==================================================================================================
// Name        : 21465_Pract1.py
// Author      : Chaitanya Paraskar
// Roll No.    : 21465
// Aim         : In second year computer engineering class, group A student’s play cricket, 
                 group B students play badminton and group C students play football.
                 Write a Python program using functions to compute following: - 
                    a) List of students who play both cricket and badminton
                    b) List of students who play either cricket or badminton but not both\
                    c) Number of students who play neither cricket nor badminton 
                    d) Number of students who play cricket and football but not badminton. 
                    (Note- While realizing the group, duplicate entries should be avoided,
                    Do not use SET built-in functions)
//==================================================================================================

'''


def present(v, li):
    for i in range(len(li)):
        if v == li[i]:
            return True
    else:
        return False


def not_present(v, li):
    for i in range(len(li)):
        if v == li[i]:
            return False
    else:
        return True


def intersection(l1, l2):
    res = []
    for e in l1:
        if present(e, l2) and not_present(e, res):
            res.append(e)
    return res


def union(l1, l2):
    res = []
    for e in l1:
        res.append(e)

    for e in l2:
        if not_present(e, res):
            res.append(e)
    return res


def difference(l1, l2):
    res = []
    for e in l1:
        if not_present(e, l2):
            res.append(e)
    return res


len_A = int(input("Enter No. of students who play Cricket :-"))
A = []
for i in range(len_A):
    name = input(f"Enter name of student {i+1}: ")
    if present(name, A):
        print(name, "already present !!")
    else:
        A.append(name)

len_B = int(input("Enter No. of students who play Badminton :-"))
B = []
for i in range(len_B):
    name = input(f"Enter name of student {i+1}: ")
    if present(name, B):
        print(name, "already present !!")
    else:
        B.append(name)

len_C = int(input("Enter No. of students who play Football :-"))
C = []
for i in range(len_C):
    name = input(f"Enter name of student {i+1}: ")
    if present(name, C):
        print(name, "already present !!")
    else:
        C.append(name)

print("Students who play both Cricket and Badminton : ",
      intersection(A, B))

print("Students who play either cricket or badminton but not both : ",
      difference(union(A, B), intersection(A, B)))

print("Number of students who play neither cricket nor badminton : ",
      len(difference(union(union(A, B), C), union(A, B))))

print("Number of students who play cricket and football but not badminton : ",
      len(difference(intersection(A, C), B)))


'''

OUTPUT :-

$ python pract1.py
Enter No. of students who play Cricket :-4
Enter name of student 1: 1
Enter name of student 2: 2
Enter name of student 3: 3
Enter name of student 4: 7
Enter No. of students who play Badminton :-4
Enter name of student 1: 1
Enter name of student 2: 5
Enter name of student 3: 7
Enter name of student 4: 6
Enter No. of students who play Football :-4
Enter name of student 1: 1
Enter name of student 2: 3
Enter name of student 3: 4
Enter name of student 4: 5
Students who play both Cricket and Badminton :  ['1', '7']
Students who play either cricket or badminton but not both :  ['2', '3', '5', '6']
Number of students who play neither cricket nor badminton :  1
Number of students who play cricket and football but not badminton :  1

'''
