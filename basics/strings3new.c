#include <stdio.h>

int main() 
{
    char s[] = "Beautiful Day!!";
    char t[] = "Good Morning~!!";

    // replace the null character ending t  with a comma
    t[15] = ',';

    printf("%s\n", t);

    return 0;
}
