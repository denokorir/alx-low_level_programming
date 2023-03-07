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

3. strspn
Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
/*
The function takes two arguments: a pointer to the string s and a pointer to the string accept. It returns an unsigned integer, which represents the number of bytes in the initial segment of s that consist only of bytes from accept.

The function first initializes a counter variable count to 0 and a pointer variable p to point to the first character of s.

Then, it enters a loop that continues as long as *p is not the null character and strchr(accept, *p) returns a non-null pointer. The strchr function searches for the first occurrence of *p in the string accept, and returns a pointer to that character if found, or NULL otherwise.

Inside the loop, the function increments the count variable and advances the p pointer to the next character of s.

Once the loop terminates, the function returns the final value of count, which represents the number of characters in the initial segment of s that consist only of characters from accept.

Note that this implementation assumes that the input strings s and accept are null-terminated, and that the function does not modify these strings.
*/

4.strpbrk
Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

5. strstr
Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

6. Chess is mental torture
Write a function that prints the chessboard
/*
This code creates a 2-dimensional array of characters to represent the chessboard. Each square on the board is either a "W" or "B" to represent a white or black square. It then loops through the array and prints each character with a space in between, and a newline character after each row.
*/


