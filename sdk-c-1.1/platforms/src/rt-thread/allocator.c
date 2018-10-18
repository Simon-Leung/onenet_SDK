#include <stdlib.h>
#include "std_wrapper.h"

#include <rtthread.h>


REGINA_API void *regina_malloc(size_t size)
{
	return rt_malloc(size);
}

REGINA_API void regina_free(void *ptr)
{
	rt_free(ptr);
}

REGINA_API void *regina_calloc(size_t nmemb, size_t size)
{
	return rt_calloc(size*nmemb);
}

REGINA_API void *regina_realloc(void *ptr, size_t size)
{
	return rt_realloc(ptr,size);
}
