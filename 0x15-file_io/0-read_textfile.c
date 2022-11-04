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
	int file;
	int l, i;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	l = read(file, buf, letters);
	if (l == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	i = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(file);
	if (i != l)
		return (0);
	return (l);
}
