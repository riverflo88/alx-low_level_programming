#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the text file
 * @letters: The number of letter it should read and print
 * Return: The actual number of letter it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return (0);

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    char *buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    close(fd);
    free(buffer);

    return (bytes_written);
}
