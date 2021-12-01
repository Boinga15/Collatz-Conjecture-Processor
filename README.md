# Collatz-Conjecture-Processor
A simple processor in C++ that anyone may use. It processes any number through Collatz's Conjecture.

For those who don't know, Collatz's Conjecture is a mathematical conjecture which hypothesises that if you take any number and, if it is even divide it by 2 or if it is odd multiply it by 3 and add 1 (3x + 1), you will end up in an infinite loop of 4, 2, 1, 4, 2, 1, 4...

This program was made to see if a number obeys the conjecture by quickly running it through the process. If it does, the program should both output the success as well as how many calculations it needed to do to get there. The program will also output if a number breaks it, calling it infinite if the number ever exceeds the integer limit (2147483647).
