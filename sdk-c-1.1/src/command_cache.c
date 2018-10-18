#include <stdlib.h>
#include "util.h"
#include "command_cache.h"



static void regina_cmdcache_reset_cmd_cache_list(cmd_cache_head_t* cmd_head)
{
    cmd_head->first_node =NULL;
    cmd_head->cache_count = 0;
    /* default cache size is 3 */
    cmd_head->cache_max_count = DEFAULT_CMD_CACHE_SIZE;
}

/*-------------------API---------------------*/
/* func for basicly malloc and free */
cmd_cache_node_t* regina_cmdcache_malloc_cmd_cache_node()
{
    cmd_cache_node_t* new_node = (cmd_cache_node_t*)malloc(sizeof(cmd_cache_node_t));
    return new_node;
}
void regina_cmdcache_free_cmd_cache_node(cmd_cache_node_t* cmd_node)
{
    if(NULL == cmd_node)
        return;
    free(cmd_node);
    cmd_node = NULL;
}

/* func for orgnize the list */
void regina_cmdcache_init_cmd_cache_list(cmd_cache_head_t* cmd_head)
{
    regina_cmdcache_reset_cmd_cache_list(cmd_head);
}

void regina_cmdcache_check_cmd_cache_list(cmd_cache_head_t* cmd_head)
{
    if(NULL == cmd_head)
        return;

    while(cmd_head->cache_count >= cmd_head->cache_max_count)
        regina_cmdcache_delete_firstnode_of_list(cmd_head);
    
}


int regina_cmdcache_append_node_to_list(cmd_cache_head_t* cmd_head,cmd_cache_node_t* cmd_node)
{
    if(NULL == cmd_head || NULL == cmd_node)
        return -1;
    REGINA_LOG_DEBUG0("[NOTF SVC] CMD append a cache node to list");
    regina_cmdcache_check_cmd_cache_list(cmd_head);
    cmd_cache_node_t* tmp = cmd_head->first_node;
    if(NULL == cmd_head->first_node)
    {
        cmd_head->first_node = cmd_node;
        ++ cmd_head->cache_count;
        return 0;
    }

    for(;NULL != tmp->next; tmp = tmp->next) 
    {}
    tmp->next = cmd_node;
    ++ cmd_head->cache_count;
    return 0;
}

int regina_cmdcache_delete_firstnode_of_list(cmd_cache_head_t* cmd_head)
{
    if(NULL == cmd_head)
        return -1;
    cmd_cache_node_t* tmp = cmd_head->first_node;
    REGINA_LOG_DEBUG0("[NOTF SVC] CMD delete the first node of the list ");

    if(NULL != tmp->cmd_body) free(tmp->cmd_body);
    cmd_head->first_node = cmd_head->first_node->next;
    tmp->next = NULL;
    regina_cmdcache_free_cmd_cache_node(tmp);
    cmd_head->cache_count --;
    return 0;
}


int regina_cmdcache_destroy_cmd_cache_list(cmd_cache_head_t* cmd_head)
{
    if(NULL == cmd_head)
        return -1;
    REGINA_LOG_DEBUG0("[NOTF SVC] CMD destroy the cache list! ");
    cmd_cache_node_t* tmp = cmd_head->first_node;
    for(;NULL != tmp; tmp = tmp->next)
    {
        regina_cmdcache_delete_firstnode_of_list(cmd_head);
    }
    regina_cmdcache_reset_cmd_cache_list(cmd_head);
    return 0;
}

int regina_cmdcache_check_cmd_cache_is_empty(cmd_cache_head_t* cmd_head)
{
    if(NULL == cmd_head)
        return -1;
    if(cmd_head->first_node == NULL)
        return 1;
    else
        return 0;
}


