0x0A- malloc_free


Allocation of memory - create new blocks of memory to fill when declaring variables of unknown size. 


Only using malloc - alloc and realloc prohibited.



0- Function that creates an array of chars, and initializes it with a specific char.

	-Returns NULL if size = 0.

	-Returns a pointer to the array, or NULL if it fails.


1- Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.


	-The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

	-Returns NULL if str = NULL.

	-On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.


2- Function that concatenates two strings.

	-The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.

	-If NULL is passed, treat it as an empty string.

	-The function should return NULL on failure.


3-Function that returns a pointer to a 2 dimensional array of integers.

	-Each element of the grid should be initialized to 0.

	-The function should return NULL on failure.

	-If width or height is 0 or negative, return NULL.


4-Function that frees a 2 dimensional grid previously created by your alloc_grid function.

	-program should not crash if the grid is invalid (NULL or size = 0).

	-Note that we will compile with your alloc_grid.c file. Make sure it compiles.


5-Function that concatenates all the arguments of your program.

	-Returns NULL if ac == 0 or av == NULL.

	-Returns a pointer to a new string, or NULL if it fails.

	-Each argument should be followed by a \n in the new string.



6-Function that splits a string into words.

	-The function returns a pointer to an array of strings (words).

	-Each element of this array should contain a single word, null-terminated.

	-The last element of the returned array should be NULL.

	-Words are separated by spaces.

	-Returns NULL if str == NULL or str == "".

	-If function fails, it should return NULL.
