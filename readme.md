# using head file

1. main.c #include "func.h"
2. func.h type func(arg);
3. func.c type func(arg ){xxoo}
4. gcc -c 1.c -o 1.o ; gcc -c 2.c -o 2.o ; gcc 1.o 2.o -o mm
5. To be continue ...