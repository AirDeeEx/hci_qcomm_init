#include <sys/types.h>
#include <string.h>

#ifndef HAVE_STRLCPY
size_t strlcpy (char *dst, const char *src, size_t dst_sz);
#endif
