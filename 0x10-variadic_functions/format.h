#ifndef FORMAT
#define FORMAT
/**
 * struct _format - defines the format of printing
 * @type: data type
 * @fn: pointer function
 */
typedef struct _format
{
        char type;
        void (*fn)(va_list);
} _format;
#endif
