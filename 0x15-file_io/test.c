#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL) {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    char *buf = (char *) malloc((letters + 1) * sizeof(char));
    if (buf == NULL) {
        fclose(fp);
        return 0;
    }

    size_t read_size = fread(buf, sizeof(char), letters, fp);
    if (read_size == 0) {
        fclose(fp);
        free(buf);
        return 0;
    }

    buf[read_size] = '\0';

    ssize_t write_size = write(STDOUT_FILENO, buf, read_size);
    if (write_size == -1 || write_size != (ssize_t) read_size) {
        fclose(fp);
        free(buf);
        return 0;
    }

    fclose(fp);
    free(buf);
    return (ssize_t) read_size;
}
