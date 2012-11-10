ifndef __BUDDY_H__
#define __BUDDY_H__
typedef struct buddy_pool
{
    int min_order;
    int order;
    unsigned long long pool_size;
    unsigned char* bh;
    char* buffer;
}buddy;
   
struct buddy_pool* buddy_create(unsigned int order,unsigned int min_order);
void buddy_destroy(struct buddy_pool* self);
char* buddy_malloc(struct buddy_pool* self,int size);
void buddy_free(struct buddy_pool* self,char* pointer);
int buddy_size(struct buddy_pool* self,char* pointer);
int buddy_dump(struct buddy_pool* self);
#endif
