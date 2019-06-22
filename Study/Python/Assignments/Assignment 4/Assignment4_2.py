#2.Write a program which contains one lambda function which accepts two parameters and return
#its multiplication.

mult = lambda num1,num2 : num1 * num2;

num1 = int(input("Enter the number1 :"));
num2 = int(input("Enter the number2 :"));

print("multplication of number is ",mult(num1,num2));