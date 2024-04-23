# Constant conversion factor
FAHRENHEIT_TO_CELSIUS_FACTOR = 5 / 9

# Prompting user for input
fahrenheit = float(input("Enter the temperature in Fahrenheit: "))

# Converting temperature
celsius = (fahrenheit - 32) * FAHRENHEIT_TO_CELSIUS_FACTOR

# Displaying the result
print("The temperature in Celsius is:", celsius)
