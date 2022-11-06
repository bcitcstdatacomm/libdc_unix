#include "dc_resolv.h"


int dc_res_hnok(const char *a)
{
    return res_hnok(a);
}

int dc_res_ownok(const char *a)
{
    return res_ownok(a);
}

int dc_res_mailok(const char *a)
{
    return res_mailok(a);
}

int dc_res_dnok(const char *a)
{
    return res_dnok(a);
}

int dc_b64_ntop(u_char const *a, size_t b, char *c, size_t d)
{
    return b64_ntop(a, b, c, d);
}

int dc_b64_pton(char const *a, u_char *b, size_t c)
{
    return b64_pton(a, b, c);
}

int dc_dn_skipname(const u_char *a, const u_char *b)
{
    return dn_skipname(a, b);
}

int dc_dn_comp(const char *a, u_char *b, int c, u_char **d, u_char **e)
{
    return dn_comp(a, b, c, d, e);
}

int dc_dn_expand(const u_char *a, const u_char *b, const u_char *c, char *d, int e)
{
    return dn_expand(a, b, c, d, e);
}

int dc_res_ninit(res_state a)
{
    return res_ninit(a);
}

int dc_res_nquery(res_state a, const char *b, int c, int d, u_char *e, int f)
{
    return res_nquery(a, b, c, d, e, f);
}

int dc_res_nsearch(res_state a, const char *b, int c, int d, u_char *e, int f)
{
    return res_nsearch(a, b, c, d, e, f);
}

int dc_res_nquerydomain(res_state a, const char *b, const char *c, int d, int e, u_char *f, int g)
{
    return res_nquerydomain(a, b, c, d, e, f, g);
}

int dc_res_nmkquery(res_state a, int b, const char *c, int d, int e, const u_char *f, int g, const u_char *h, u_char *i, int j)
{
    return res_nmkquery(a, b, c, d, e, f, g, h, i, j);
}

int dc_res_nsend(res_state a, const u_char *b, int c, u_char *d, int e)
{
    return res_nsend(a, b, c, d, e);
}

void dc_res_nclose(res_state a)
{
    res_nclose(a);
}
