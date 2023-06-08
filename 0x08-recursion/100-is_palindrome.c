/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    if (len <= 1)
        return 1;
    if (s[0] != s[len - 1])
        return 0;
    s[len - 1] = '\0';
    return is_palindrome(s + 1);
}
