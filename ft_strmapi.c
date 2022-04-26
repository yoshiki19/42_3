
//関数「f」を文字列「s」の各文字に適用し、そのインデックスを最初の引数として渡して、
//「f」を連続して適用した結果として新しい文字列（malloc（3）を使用）を作成します。

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *mem;
    char *str;
    unsigned int i;

    i = 0;
    if (!s)
        return (NULL);
    str = (char *)s;
    mem = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!mem)
        return (NULL);
    while (str[i] != '\0')
    {
        mem[i] = f(i, str[i]);
        i++;
    }
    mem[i] = '\0';
    return (mem);
}