#include <stdio.h>

int theFunction(const char *s)
{
    return puts(s);
}

int main (int argc, char** argv) {
    theFunction("Hello, this is traditional work flow.");
    printf("%s: puts location: %p\n", __FILE__, puts);
}
