#include <inttypes.h>
#include <stddef.h>
#include <dc_env/env.h>


uint32_t dc_arc4random(void);
void dc_arc4random_buf(void *buf, size_t nbytes);
uint32_t dc_arc4random_uniform(uint32_t upper_bound);


