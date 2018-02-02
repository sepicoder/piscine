 int nmatch(char *s1, char *s2)
 {
  if (*s1 == '\0' && *s2 == '\0')
    return (1);
  else if (*s1 == *s2 && *s1 != '*')
    return (nmatch(s1 + 1, s2 + 1));
  else if (*s2 == '*' && !*s1)
    return (nmatch(s1, s2 + 1));
  else if (*s2 == '*' && *s1)
    return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
  else
    return (0);
 }
