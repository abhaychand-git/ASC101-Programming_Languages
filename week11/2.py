#Problem Statement:
#2. BMI calculator


#Solution:

#Formula Used: BMI = weight/(height*2)

def main():
    weight = int(input("Enter Your Weight (in Kg): "))
    height = int(input("Enter Your Height (in m): "))
    BMI = weight/(height*2)
    print(f"Your BMI is {BMI} and you are {calc(BMI)}")

def calc(BMI):
    if 0 < BMI <= 18.5:
        return "Under Weight"
    elif 18.5 < BMI <= 24.9:
        return "Normal Weight"
    elif 24.9 < BMI <= 29.9:
        return "Over Weight"
    elif 29.9 < BMI <= 34.9:
        return "Obesity (Class I)"
    elif 34.9 < BMI <= 39.9:
        return "Obesity (Class II)"
    elif 39.9 < BMI :
        return " Obesity (Class III)"
    else:
        return "Invalid Entry"

main()