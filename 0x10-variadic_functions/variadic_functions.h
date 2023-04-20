#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct _format - defines printing function
 * @c: type of printing
 * @f: function
 */
typedef struct _format
{
        char c;
	void (*f)(va_list);
} _format;

void print_char(va_list l);
void print_integer(va_list l);
void print_float(va_list l);
void print_string(va_list l);
#endif
