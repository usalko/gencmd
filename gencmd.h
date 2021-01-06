#ifndef gencmd_HEADER
#define gencmd_HEADER

#include <stdbool.h>
#include <stdint.h>

typedef void* voidptr;
typedef unsigned char* byteptr;
typedef uint32_t u32;
typedef int32_t i32;
typedef char* charptr;

typedef struct string string;

struct string {
	byteptr str;
	int len;
	int is_lit;
};

extern string gencmd__gencmd(string cmd);

#endif