#include <stdarg.h> //All the code to handle variadic functions is in stdarg.h, so you need to make sure you include it.
#include <stdio.h>

//

void print_ints(int args, ...) //that “...” is called an ellipsis, and it tells you that something else is going to follow.
								// In C, an ellipsis after the argument of a function means there are more arguments to come.
{
	va_list ap; // A va_list will be used to store the extra arguments that are passed to your function.
	va_start(ap, args); //va_start says where the variable arguments start
	int i;

	//This will loop through all of the other arguments
	for (i = 0; i < args; i++) { //	args contains a count of how many variables there are.
	printf("argument: %i\n", va_arg(ap, int)); // Now your arguments are all stored in the va_list, you can read them with va_arg.
											// va_arg takes two values: the va_list and the type of the next argument. In your case,
											// all of the arguments are ints.
	}
	va_end(ap); //After you’ve finished reading all of the arguments, you need to tell C that you’re finished. You do that with the va_end macro.
}


int main(){
	print_ints(3, 79, 101, 32); //calling the function
	//3 -> number of args
	//args = 79,101,32
}

	/*
	*A macro is used to rewrite your code before it’s compiled. The macros
	*you’re using here ( va_start , va_arg , and va_end ) might look
	*like functions, but they actually hide secret instructions that tell the
	*preprocessor how to generate lots of extra smart code inside your
	*program, just before compiling it.
	*/