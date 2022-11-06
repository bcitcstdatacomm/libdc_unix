#include <ifaddrs.h>


int dc_getifaddrs(struct ifaddrs **ifap);
void dc_freeifaddrs(struct	ifaddrs	*ifp);
