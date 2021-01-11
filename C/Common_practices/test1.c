struct string{


size_t size;
char *data;

}

struct string  *create_string(const char *initial){

assert (initial !=NULL) // assert宏的原型定义在<assert.h>中，其作用是如果它的条件返回错误，则终止程序执行。

struct string *new_string = malloc(sizeof(*new_string));

if(new_string !=NULL){

new_string->size = strlen(initial);
new_string->data =strdup(initial);


}

return new_string;

}


#define FREE(p)   do { free(p); (p) = NULL; }
while(0)#define square(x) 
#define square(x) (x)*(x)
