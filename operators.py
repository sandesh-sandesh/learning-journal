one=float(input("first number "))
two=float(input("second number "))
print("choose operaion")
print("1 = add")
print("2 = sub")
print("3 = multiply")
print("4 = divide")

choice=input("enter operations with comma ")
selected=choice.split(",")

for choice in selected:
if choice=="1":
print("result ", one+two)
elif choice=="2":
print("result ", one-two)
elif choice=="3":
print("result ", one*two)
elif choice=="4":
print("result ", one/two)
else:
print(" invalid input ")




