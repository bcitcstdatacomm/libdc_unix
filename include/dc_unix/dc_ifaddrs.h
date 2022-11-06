#include <ifaddrs.h>


int dc_getifaddrs(struct ifaddrs **ifap);
void dc_freeifaddrs(struct	ifaddrs	*ifp);
int dc_getifmaddrs(struct	ifmaddrs **ifmap);
void dc_freeifmaddrs(struct ifmaddrs *ifmp);
