#include <stdio.h>

int main()
{
    char s[100];
    gets(s);
    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", s);
}