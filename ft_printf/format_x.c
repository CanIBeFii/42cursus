
#include "ft_printf.h"

int format_x(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (ft_convert_hex((unsigned long)num, 1));
}
