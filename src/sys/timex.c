#include "sys/dc_timex.h"


int	dc_ntp_adjtime(struct timex *a)
{
    return ntp_adjtime(a);
}

int	dc_ntp_gettime(struct ntptimeval *a)
{
    return ntp_gettime(a);
}
