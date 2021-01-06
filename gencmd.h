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
typedef struct array array;
typedef struct Option_string Option_string;

struct string {
	byteptr str;
	int len;
	int is_lit;
};

struct array {
	int element_size;
	voidptr data;
	int len;
	int cap;
};

struct Option_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byteptr data;
};

typedef struct gencmd__Blob {
	byteptr data;
	i32 length;
	charptr errors;
} gencmd__Blob;

typedef array array_byte;

extern string gencmd__gencmd(string cmd);

#endif