#include "dc_ifaddrs.h"


int dc_getifaddrs(struct ifaddrs **ifap)
{
    return getifaddrs(ifap);
}

void dc_freeifaddrs(struct	ifaddrs	*ifp)
{
    freeifaddrs(ifp);
}
