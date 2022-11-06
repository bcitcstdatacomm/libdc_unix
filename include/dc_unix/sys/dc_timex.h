#include <sys/timex.h>


int	dc_ntp_adjtime(struct timex *);
int	dc_ntp_gettime(struct ntptimeval *);
