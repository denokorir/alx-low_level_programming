0x07 - pointers_arrays_strings
memset
Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
/*
In this implementation, the function takes in a pointer s to the memory area to be filled, a constant byte b to fill the memory with, and an unsigned integer n which represents the number of bytes to be filled.

The function first initializes a pointer p to the same memory address as s. It then enters a loop which iterates n times, filling each byte of memory pointed to by p with the constant byte b. After each iteration, the pointer p is incremented to point to the next byte of memory.

Once the loop is complete, the function returns the original pointer s, which now points to the memory area that has been filled with the constant byte b.
*/
1.memcpy
Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
/*
This function takes in three arguments:

dest: A pointer to the destination memory area, where the data will be copied to.
src: A pointer to the source memory area, where the data will be copied from.
n: The number of bytes to copy.
The function then uses a while loop to copy n bytes of data from the source to the destination memory area, byte-by-byte. It does this by using two char pointers, d and s, which are initially set to dest and src, respectively. On each iteration of the loop, the function copies the byte pointed to by s to the location pointed to by d, and then increments both d and s to point to the next byte in the respective memory areas. Finally, the function returns the dest pointer.
*/
2. strchr
Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
/*
The function uses a loop to iterate over the characters in the string, and checks if each character is equal to the character we're looking for. If a match is found, the pointer to the character is returned. If no match is found, the function returns NULL.
*/


