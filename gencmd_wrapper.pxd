cimport cython

cdef extern from 'gencmd.h':
	ctypedef bint bool
	ctypedef unsigned char * byteptr
	ctypedef void * voidptr
	struct string:
		void* str
		int len
		int is_lit

	string gencmd__gencmd(string cmd)
