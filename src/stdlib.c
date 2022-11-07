#include "dc_stdlib.h"
#include <stdlib.h>


uint32_t dc_arc4random(void)
{
    uint32_t ret_val;

    errno = 0;
    ret_val = arc4random();

    return ret_val;
}

void dc_arc4random_buf(void *buf, size_t nbytes)
{
    errno = 0;
    arc4random_buf(buf, nbytes);
}

uint32_t dc_arc4random_uniform(uint32_t upper_bound)
{
    uint32_t ret_val;

    errno = 0;
    ret_val = arc4random_uniform(upper_bound);

    return ret_val;
}

