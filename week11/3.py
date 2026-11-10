#Problem Statement:
#3.Temperature converter (°C ↔ °F)

#Solution:

#Formula Used: t (in F) = ((t(in C)*9)/5 + 32)

temp1 = int(input("Enter the Temprature (in Celcius): "))

temp2 = ((temp1*9)/5 + 32)

print(f"The Temprature is {temp2} degree Farenheit.")