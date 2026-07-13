int myAtoi(char *s)
{
    int i = 0;
    int sign = 1;
    long long num = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        if (num > INT_MAX / 10 ||
           (num == INT_MAX / 10 && digit > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        num = num * 10 + digit;

        i++;
    }

    return sign * num;
}