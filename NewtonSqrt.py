estimate = userInput = int(input("Your number: "))
while abs(estimate - userInput / estimate) > 1e-15 * estimate:
    estimate = (userInput / estimate + estimate) / 2
print(estimate)
