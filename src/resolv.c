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

int dc_sym_ston(const struct res_sym *a, const char *b, int *c)
{
    return sym_ston(a, b, c);
}

const char *dc_sym_ntos(const struct res_sym *a, int b, int *c)
{
    return sym_ntos(a, b, c);
}

const char *dc_sym_ntop(const struct res_sym *a, int b, int *c)
{
    return sym_ntop(a, b, c);
}

int dc_b64_ntop(u_char const *a, size_t b, char *c, size_t d)
{
    return b64_ntop(a, b, c, d);
}

int dc_b64_pton(char const *a, u_char *b, size_t c)
{
    return b64_pton(a, b, c);
}

int dc_loc_aton(const char *a, u_char *b)
{
    return loc_aton(a, b);
}

const char *dc_loc_ntoa(const u_char *a, char *b)
{
    return loc_ntoa(a, b);
}

int dc_dn_skipname(const u_char *a, const u_char *b)
{
    return dn_skipname(a, b);
}

void dc_putlong(u_int32_t a, u_char *b)
{
    putlong(a, b);
}

void dc_putshort(u_int16_t a, u_char *b)
{
    putshort(a, b);
}

const char *dc_p_class(int a)
{
    return p_class(a);
}

const char *dc_p_time(u_int32_t a)
{
    return p_time(a);
}

const char *dc_p_type(int a)
{
    return p_type(a);
}

const char *dc_p_rcode(int a)
{
    return p_rcode(a);
}

const u_char *dc_p_cdnname(const u_char *a, const u_char *b, int c, FILE *d)
{
    return p_cdnname(a, b, c, d);
}

const u_char *dc_p_cdname(const u_char *a, const u_char *b, FILE *c)
{
    return p_cdname(a, b, c);
}

const u_char *dc_p_fqnname(const u_char *a, const u_char *b, int c, char *d, int e)
{
    return p_fqnname(a, b, c, d, e);
}

const u_char *dc_p_fqname(const u_char *a, const u_char *b, FILE *c)
{
    return p_fqname(a, b, c);
}

const char *dc_p_option(u_long a)
{
    return p_option(a);
}

char *dc_p_secstodate(u_long a)
{
    return p_secstodate(a);
}

int dc_dn_count_labels(const char *a)
{
    return dn_count_labels(a);
}

int dc_dn_comp(const char *a, u_char *b, int c, u_char **d, u_char **e)
{
    return dn_comp(a, b, c, d, e);
}

int dc_dn_expand(const u_char *a, const u_char *b, const u_char *c, char *d, int e)
{
    return dn_expand(a, b, c, d, e);
}

u_int dc_res_randomid(void)
{
    return res_randomid();
}

int dc_res_nameinquery(const char *a, int b, int c, const u_char *d, const u_char *e)
{
    return res_nameinquery(a, b, c, d, e);
}

int dc_res_queriesmatch(const u_char *a, const u_char *b, const u_char *c, const u_char *d)
{
    return res_queriesmatch(a, b, c, d);
}

const char *dc_p_section(int a, int b)
{
    return p_section(a, b);
}

int dc_res_ninit(res_state a)
{
    return res_ninit(a);
}

int dc_res_nisourserver(const res_state a, const struct sockaddr_in *b)
{
    return res_nisourserver(a, b);
}

void dc_fp_resstat(const res_state a, FILE *b)
{
    fp_resstat(a, b);
}

void dc_res_pquery(const res_state a, const u_char *b, int c, FILE *d)
{
    res_pquery(a, b, c, d);
}

const char *dc_res_hostalias(const res_state a, const char *b, char *c, size_t d)
{
    return res_hostalias(a, b, c, d);
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
    return  res_nsend(a, b, c, d, e);
}

int dc_res_findzonecut2(res_state a, const char *b, ns_class c, int d, char *e, size_t f, union res_sockaddr_union *g, int h)
{
    return res_findzonecut2(a, b, c, d, e, f, g, h);
}

void dc_res_nclose(res_state a)
{
    res_nclose(a);
}

int dc_res_nopt(res_state a, int b, u_char *c, int d, int e)
{
    return res_nopt(a, b, c, d, e);
}

void dc_res_ndestroy(res_state a)
{
    res_ndestroy(a);
}

u_int16_t dc_res_nametoclass(const char *a, int *b)
{
    return res_nametoclass(a, b);
}

u_int16_t dc_res_nametotype(const char *a, int *b)
{
    return res_nametotype(a, b);
}

void dc_res_setservers(res_state a, const union res_sockaddr_union *b, int c)
{
    res_setservers(a, b, c);
}

int dc_res_getservers(res_state a, union res_sockaddr_union *b, int c)
{
    return res_getservers(a, b, c);
}
