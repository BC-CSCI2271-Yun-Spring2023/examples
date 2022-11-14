#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    for (int i=1; i<argc; ++i)
    {
        struct stat finfo;

        if (stat(argv[i], &finfo) == -1)
        {
            printf("%s: file not found\n", argv[i]);
        }
        else
        {
            printf("%s %li\n", argv[i], finfo.st_size);
        }
    }
    return 0;
}
