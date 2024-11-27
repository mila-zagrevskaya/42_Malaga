# push_swap


Generate 100 random values using shuf.
Run the push_swap program with the random values and capture the instructions.
Count the size of the instruction list using wc -l to get the number of instructions:

ARG=$(shuf -i 1-1000 -n 100 | tr '\n' ' '); INSTRUCTIONS=$(./push_swap $ARG); echo "$INSTRUCTIONS" | ./checker_linux $ARG; echo "$INSTRUCTIONS" | wc -l


This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible nbr of actions. To succeed you’ll have to manipulate various types of algo and choose the most appropriate solu for an optimized data sorting