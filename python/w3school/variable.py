x = 5
print(x)

y = "john"
print(y)

# Casting

x = str(3)
print(x)
print(type(x))

y = int(3)
print(3)

z = float(3)
print(z)

# Camel case
myVariableName = "john"

# Pascal case
MyVariableName = "don"

# Snake case
my_variable_name = "farjii"

print(myVariableName)
print(MyVariableName)
print(my_variable_name)

x, y, z = 3, 4, 5
print(x)
print(y)
print(z)

a = b = c = 10
print(a)
print(b)
print(c)

# Unpacking

fruits = ["Apple", "Mango", "Banana"];
x, y, z = fruits
print(x)
print(y)
print(z)

x = "python"
y = "is"
z = "awesome"
print(x, y, z) 
print(x + y + z)


a = "python "
b = "is "
c = "awesome "
print(a + b + c)

x = 5
y = "john"
print(x, y)

x = "cool"
def myfunc():
    global x 
    x = "fantastic"  # global 
    print("Python is " + x)

myfunc()
print("Python is " + x)