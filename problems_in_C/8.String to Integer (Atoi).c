int myAtoi(char *s)
{
    int64_t integer = 0;
    char *ptr = s;
    signed char sign = 1;

    if (*ptr == '-')
    {
        sign = -1;
        ptr++;
    }
    else if (*ptr == '+')
        ptr++;
    else
        while (*ptr == ' ')
        {
            ptr++;
            if (*ptr == '-')
            {
                sign = -1;
                ptr++;
                break;
            }
            else if (*ptr == '+')
            {
                ptr++;
                break;
            }
        }

    for (ptr; *ptr >= '0' && *ptr <= '9'; ptr++)
    {
        integer = integer * 10 + ((*ptr) - '0');
        if (integer >= pow(2, 31))
            if (sign < 0)
                return pow(2, 31) * -1;
            else
                return pow(2, 31) - 1;
    }

    integer *= sign;
    return integer;
}