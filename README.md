# Password
Overview
The Password Analyzer is a C program designed to evaluate the strength of a given password. It checks the password against a set of predefined security criteria, such as minimum length, inclusion of uppercase and lowercase letters, digits, and special characters. The program outputs whether the password is strong or provides specific feedback on what it lacks to meet the required standards.

Key Features
Minimum Length Check: Ensures the password is at least 8 characters long.
Uppercase Letter Requirement: Verifies that the password contains at least one uppercase letter.
Lowercase Letter Requirement: Checks that the password contains at least one lowercase letter.
Digit Requirement: Confirms that the password includes at least one numerical digit.
Special Character Requirement: Ensures the password contains at least one special character (e.g., !@#$%^&*).
Password Strength Evaluation: Outputs feedback to the user, indicating whether the password is strong or identifying which security criteria the password fails to meet.

How It Works
STEP 1:Input: The user is prompted to enter a password.
STEP 2:Validation: The program checks the password against the following criteria:
Length should be at least 8 characters.
Must include at least one uppercase letter.
Must include at least one lowercase letter.
Must include at least one digit.
Must include at least one special character (non-alphanumeric).

STEP 3:Output: If the password meets all criteria, it is classified as "strong". Otherwise, the program outputs specific messages explaining which requirement the password did not meet.
