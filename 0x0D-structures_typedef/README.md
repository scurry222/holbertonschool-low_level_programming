0x0D - structures_typedef


0-Define a new type struct dog with the following elements:

	-name, type = char *
	-age, type = float
	-owner, type = char *


1-Function that initialize a variable of type struct dog


2-Function that prints a struct dog

	-Allowed to use the standard library
	-If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	-If d is NULL print nothing


3-Define a new type dog_t as a new name for the type struct dog


4-Function that creates a new dog

	-Have to store a copy of name and owner
	-Return NULL if the function fails


5-Function that frees dogs
