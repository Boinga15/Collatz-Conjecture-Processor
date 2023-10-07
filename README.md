# Collatz-Conjecture-Processor
A simple processor in C++ that anyone may use. It processes any number through Collatz's Conjecture.

For those who don't know, Collatz's Conjecture is a mathematical conjecture. It hypothesises that any number that is put through the function f(x) over and over again will either enter an infinite loop (1, 4, 2, 1, 4, 2...), or reach infinity.

The function f(x) divides the number by 2 if it is even, or multiplies it by 3 and adds 1 if it is odd.

The program will consider a number as "reaching infinity" if it exceeds the integer limit. Otherwise if the number reaches 1, 2, or 4, the program says that it follows the conjecture.
