0x0B. C - malloc, free

0. Float like a butterfly, sting like a bee

To create an array of characters and set it to a particular character, implement a function. The function's prototype is char *create_array(unsigned int size, char c). It returns NULL if size is zero, and it returns a pointer to the array or NULL if it fails.

1. The woman who has no imagination has no wings

Create a function that allocates a new space in memory and copies the string passed as an argument into it. The function should have the following prototype: char* _strdup(char* str).

The _strdup() function returns a pointer to a newly created duplicate of the string str. The new string is allocated using malloc() and can be freed using free(). If the argument str is NULL, the function returns NULL.

If the function is successful, it returns a pointer to the newly duplicated string. If there is not enough memory available, the function returns NULL.

2. He who is not courageous enough to take risks will accomplish nothing in life

Create a function that combines two words together.

Function prototype: char str_concat(char s1, char s2);

The result should be a new string that includes both s1 and s2, with a null terminator.

If a null value is provided, the function will treat it as an empty string.

If the function fails, it will return NULL.

3. If you even dream of beating me you'd better wake up and apologize

Create a program that makes a 2D array of numbers and returns a pointer to it. Each number in the array should be set to 0. If the program doesn't work, return NULL. If the width or height of the array is negative or 0, return NULL.

4. It's not bragging if you can back it up

Create a function that can release a 2D grid that was made by your "alloc_grid" function. The function should have this prototype: "void free_grid(int **grid, int height)". Remember to check that your code compiles with the "alloc_grid.c" file.

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Create a function that combines all the inputs of your program into one string.

The function should have the following:

a name "argstostr"
takes in two parameters, "ac" and "av", where "ac" represents the number of arguments and "av" is an array of strings containing the arguments
if "ac" is 0 or "av" is empty, the function returns NULL
if the function fails, it returns NULL
each argument in the new string should be followed by a newline character ("\n").

6. I will show you how great I am


Create a program that separates a sentence into words.

The prototype of the function is: char **strtow(char *str);

This function returns an array of strings, where each element in the array is a word from the sentence. Each word is separated by a space and is null-terminated.

The last element in the array is always NULL.

If the input string is empty or NULL, the function returns NULL. And if the function fails for any reason, it will also return NULL.
