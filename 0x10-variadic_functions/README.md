This project is about C variadic functions.
Variadic functions are functions that take a variable number 
or type of arguments.
Variadic functiond syntax int func(char a, int b, double c);
The datatype used to declare a pointer to the arguments is va_list.
There are three macros used to access the arguments
	-va_start - takes two arguments -> pointer and last function argument. Starts access to the pointer.
	-va_arg - points the pointer to the next argument. Takes params
ointer to args and datatype being pointed to.
	-va-end - ends access to the pointer
