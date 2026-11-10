#Problem Statement:
#1. Grade calculator in Python.

#Solution:

marks = int(input("Enter your Marks: "))

if 100 >= marks and marks >= 90:
    print("Grade: A")

elif 90 > marks and marks >= 80:
    print("Grade: B")

elif 80 > marks and marks >= 70:
    print("Grade: C")

elif 70 > marks and marks >= 60:
    print("Grade: D")

elif 60 > marks and marks >= 50:
    print("Grade: E")

elif 50 > marks  and  marks >= 0:
    print("Grade: F")

else:
    print("Invalid Marks")

