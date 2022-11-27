#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
        va_list list;
        int i = 0;
        va_start(list, format);
        for (i= 0; format[i] != '\0'; i++)
        {
            if (format[i] == '%')
        {
                if (format[i + 1] == 'c')
                {
                        printf("%c\n", va_arg(list, int));
                        return (1);
                }
                else if (format[i + 1] == 's')
                {
                        printf("%s\n", va_arg(list, char *));
                        return (strlen(va_arg(list, char *)));
                }
                else if (format[i + 1] == 'i')
                {
                        printf ("%d\n", va_arg(list, int));
                        return (sizeof(va_arg(list, int)) / sizeof(int));
                }
                else if (format[i + 1] == 'd')
                {
                    printf("%d\n", va_arg(list, int));
                    return(sizeof(va_arg(list, int) / sizeof(int)));
                }
                else if (format[i + 1] == 'u')
                {
                        printf("%u\n", va_arg(list, unsigned int));
                        return (sizeof(va_arg(list, unsigned int) / sizeof(unsigned int)));
                }
                else if (format[i + 1] == 'o')
                {
                    printf("%o\n", va_arg(list, int));
                    return(sizeof(va_arg(list, int)) / sizeof(unsigned int));
                }
                else if (format[i + 1] == 'p')
                {
                    printf("%p\n", va_arg(list, char *));
                    return(strlen(va_arg(list, char *)));
                }
        }
        va_end(list);
|}
