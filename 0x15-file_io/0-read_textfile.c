#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE
/**
*read_textfile - read the content of the file
*@filename: the name of the file
*@letters: number of letters
*Return: numbers of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, l, w;
	char *ptr;

	ptr = malloc(letters);
	if (ptr == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(ptr);
		return (0);
	}

	l = read(file, ptr, letters);

	w = write(STDOUT_FILENO, ptr, l);

	close(file);

	return (w);
}
