#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point 
 * prints out the last part of a quote in the standard error
 * Return: 1 if success
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;
	__asm__ ("syscall"
	: "=a" (ret)
	: "a" (syscall),
	"D" (fd),
	"S" (s),
	"d" (1));
	return (1);
}
