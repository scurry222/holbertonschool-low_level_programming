#0x0E-function_pointers

##0-Function thats prints a name


##1-Function that executes a function given as a parameter on each element of an array

	-where size is the size of the array
	-and action is a pointer to the function you need to use


##2-Function that searches for an integer

	-where size is the number of elements in the array array
	-cmp is a pointer to the function to be used to compare values
	-int_index returns the index of the first element for which the cmp function does not return 0
	-If no element matches, return -1
	-If size <= 0, return -1

##3-program that performs simple operations

	-You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
operator is one of the following:
		+: addition
		-: subtraction
		*: multiplication
		/: division
		%: modulo
	-The program prints the result of the operation, followed by a new line
	-You can assume that the result of all operations can be stored in an int
	-if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
	-if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
	-if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
