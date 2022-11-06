#include "dc_ifaddrs.h"


int dc_getifaddrs(struct ifaddrs **ifap)
{
    return getifaddrs(ifap);
}

void dc_freeifaddrs(struct	ifaddrs	*ifp)
{
    freeifaddrs(ifp);
}

int dc_getifmaddrs(struct	ifmaddrs **ifmap)
{
    return getifmaddrs(ifmap);
}

void dc_freeifmaddrs(struct ifmaddrs *ifmp)
{
    freeifmaddrs(ifmp);
}
