from math import *
import time
import random

t0 = time.time()

def find_divisors(n):
    max_prime_div= floor(sqrt(n)) + 1

    list = []
    start = 2
    x = 1
    
    if n % 2 == 0:
        x = 2
        start = 3
        list.append(2)

    for i in range(start, max_prime_div, x):
        if not(n % i):                              # Tester si n est divisible par i
            if is_prime(i):
                list.append(i)
                
    return list

def is_prime(n):
    max_div = floor(sqrt(n)) + 1

    if n == 1:
        return False
    if not(n % 2):
        return False
    for i in range(3, max_div, 2):
        if not(n % i):
            return False
    
    return True

def sum_of_squares(n):
    return (n*(n+1)*(2*n+1))/6

def square_of_sum(n):
    return ((1 + n)*n/2)**2

def syracuse(n, cpt = 1):
    if n == 1:
        return cpt
    if n % 2 == 0:
        cpt += 1
        return syracuse(n/2, cpt)
    else:
        cpt += 1
        return syracuse(3*n + 1, cpt)
    result = result * (n+i)/i

def fact(n):
    if (n < 2):
        return 1
    else:
        return n * fact(n - 1)


def double(x): return x * 2
def triple(x): return x * 3

