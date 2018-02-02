int	ft_atoi(const char *str)
{
  int num;
  int sign;

  sign = 1;
  while (*str == '\n' || *str == '\v' || *str == '\t' ||
			   	*str == '\f' || *str == '\r' || *str == ' ')
          str++;
  if (*str == '-')
    sign = -1;
  if (*str == '+' || *str == '-')
    str++;
  while (*str >= '0' && *str <= '9')
  {
    num = (num * 10) + (*str - '0');
    str++;
  }
  return (sign * num);
}
