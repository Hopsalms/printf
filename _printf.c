#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function with limited specifiers
 * @format: Format string containing the text and format specifiers
 * 
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char ch;
    char *str;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                ch = (char)va_arg(args, int);
                putchar(ch);
                count++;
            }
            else if (*format == 's')
            {
                str = va_arg(args, char *);
                while (*str)
                {
                    putchar(*str++);
                    count++;
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                count++;
            }
            else
            {
                putchar('%');
                putchar(*format);
                count += 2;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return (count);
}

int main(void)
{
    int len;

    len = _printf("Hello %s, your score is %c%%\n", "Alice", 'A');
    printf("Printed %d characters\n", len);

    return (0);
}
