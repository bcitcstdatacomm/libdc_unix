#include "net/dc_ethernet.h"

#ifdef __linux__
#include <netinet/ether.h>
#endif


struct ether_addr *dc_ether_aton(const char *a)
{
    return ether_aton(a);
}

int	dc_ether_hostton(const char *a, struct ether_addr *b)
{
    return ether_hostton(a, b);
}

int	dc_ether_line(const char *a, struct ether_addr *b, char *c)
{
    return ether_line(a, b, c);
}

char *dc_ether_ntoa(const struct ether_addr *a)
{
    return ether_ntoa(a);
}

int	dc_ether_ntohost(char *a, const struct ether_addr *b)
{
    return ether_ntohost(a, b);
}
