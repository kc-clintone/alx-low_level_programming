#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
        int length;
        char *dup;
        list_t *_newNode;

        _newNode = (list_t *)malloc(sizeof(list_t));
        if (_newNode == NULL)
                return (NULL);
        dup = strdup(str);
        if (dup == NULL)
        {
                free(_newNode);
                return (NULL);
        }
        for (length = 0; str[length];)
                length++;
        _newNode->str = dup;
        _newNode->len = length;
        _newNode->next = *head;
        *head = _newNode;
        return (_newNode);
}
