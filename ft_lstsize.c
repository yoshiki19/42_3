#include "libft.h"

int ft_lstsize(t_list *lst);

int main(void)
{
    t_list *x;
    t_list *y;
    t_list *z;
    t_list *s;


    
    x = (t_list *)malloc(sizeof(t_list));
    y = (t_list *)malloc(sizeof(t_list));
    z = (t_list *)malloc(sizeof(t_list));
    s = (t_list *)malloc(sizeof(t_list));
    x->next = y;
    y->next = z;
    z->next = NULL;
    s->next = NULL;
    printf("%d", ft_lstsize(x));
}

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}