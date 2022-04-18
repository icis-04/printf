#include <stdio.h>
#include <stlib.h>
#include <starg.h>

int _printf(const char *format, ...)
{
int size = 0;
char *p = NULL;
va_list ap;
va_start(ap, format);
size = vsnprinf(p, size, format, ap);
va_end(ap);
if (size < 0)
{
return NULL;
}
size++;
p = malloc(size);
if (p == NULL)
{
return NULL;
}
va_start(ap, format);
size = vsnprintf(p, size, format, ap);
va_end(ap);
if (size < 0)
{
free(p);
return NULL;
}
};


