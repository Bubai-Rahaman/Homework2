import time

from scipy.special import factorial

N = int(input('Enter the number of which you want to calculate factorial: '))

#time 
start_time = time.time()
fact = factorial(N)
end_time = time.time()

print("Factorial of",N,"is",fact)

print("The cpu time used to calculate factorial is",end_time-start_time,"sec")
