#ifndef __RGMP_COMMAND_CACHE_H__
#define __RGMP_COMMAND_CACHE_H__

#define CMD_CACHE_UUID_LENGTH 36 /* 8-4-4-4-12 */
#define DEFAULT_CMD_CACHE_SIZE 3



//static int cmd_cache_size;
typedef struct cmd_cache_node_t{
    char* cmd_body;
    char cmd_id[CMD_CACHE_UUID_LENGTH + 1];
    size_t cmd_body_size;
    int cmd_handled;
    int has_cmd_ack;
    
    struct cmd_cache_node_t* next;
}cmd_cache_node_t;


typedef struct cmd_cache_head_t{
    cmd_cache_node_t* first_node;
    int cache_count;
    int cache_max_count;
}cmd_cache_head_t;


cmd_cache_node_t* regina_cmdcache_malloc_cmd_cache_node();

void regina_cmdcache_free_cmd_cache_node(cmd_cache_node_t* cmd_node);
void regina_cmdcache_init_cmd_cache_list(cmd_cache_head_t* cmd_head);
void regina_cmdcache_check_cmd_cache_list(cmd_cache_head_t* cmd_head);

int regina_cmdcache_destroy_cmd_cache_list(cmd_cache_head_t* cmd_head);
int regina_cmdcache_append_node_to_list(cmd_cache_head_t* cmd_head,cmd_cache_node_t* cmd_node);
int regina_cmdcache_delete_firstnode_of_list(cmd_cache_head_t* cmd_head);
int regina_cmdcache_check_cmd_cache_is_empty(cmd_cache_head_t* cmd_head);

#endif /* __RGMP_COMMAND_CACHE_H__ */
