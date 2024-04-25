# Create an empty list to store fruits
fruits = []

# Ask the user to enter 5 fruits
for i in range(5):
    fruit = input("Enter a fruit: ")
    fruits.append(fruit)

# Print each fruit in the list
print("List of fruits:")
for fruit in fruits:
    print(fruit)
