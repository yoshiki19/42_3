#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *mem;

    mem = malloc(sizeof(t_list));
    if (mem == NULL)
        return (NULL);
    mem->content = content;
    mem->next = NULL;
    return (mem);
}



// typedef struct      s_list
// {
//     void            *content;
//     struct s_list   *next;
// }                   t_list;