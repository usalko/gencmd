module gencmd

// VideoCore library includes
#flag -I @VROOT/thirdparty/vc
#flag -I @VROOT/c
#flag @VROOT/c/gencmd.o

#include "gencmd.h"

fn C.send_command(charptr) charptr

/** ***************************************************************************
 * General commands for vchi
 */

pub fn gencmd(cmd string) string {
	result := C.send_command(cmd.str)
	if !isnil(result) {
		return cstring_to_vstring(result)
	}
	return 'Returned result is : empty'
}

