import time


def factorial(N):
	fact =1
	#recursion to calculate factorial
	for i in range(N):
		fact=fact*(i+1)
	return(fact)


N = int(input('Enter the number of which you want to calculate factorial: '))

start_time = time.time()

print("Factorial of",N,"is",factorial(N)) 
end_time = time.time()

print("Time required to compute factorial is",end_time-start_time,"sec")
