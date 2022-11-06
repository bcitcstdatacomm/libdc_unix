#include <net/ethernet.h>


struct ether_addr *dc_ether_aton(const char *);
int	dc_ether_hostton(const char *, struct ether_addr *);
int	dc_ether_line(const char *, struct ether_addr *, char *);
char *dc_ether_ntoa(const struct ether_addr *);
int	dc_ether_ntohost(char *, const struct ether_addr *);
