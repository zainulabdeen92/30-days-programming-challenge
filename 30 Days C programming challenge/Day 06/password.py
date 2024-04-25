import re

def is_strong_password(password):
    # Check if the password contains at least one letter, one number, and one special character
    if re.match(r'^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$', password):
        return True
    else:
        return False

# Prompt the user to enter a password
password = input("Enter a password: ")

# Check if the password is strong
if is_strong_password(password):
    print("The password is strong.")
else:
    print("The password is not strong. Please include at least one letter, one number, and one special character.")
