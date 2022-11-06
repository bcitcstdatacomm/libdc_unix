#include "arpa/dc_nameser.h"


int dc_ns_msg_getflag(ns_msg a, int b)
{
    return ns_msg_getflag(a, b);
}

u_int dc_ns_get16(const u_char *a)
{
    return ns_get16(a);
}

u_long dc_ns_get32(const u_char *a)
{
    return ns_get32(a);
}

void dc_ns_put16(u_int a, u_char *b)
{
    ns_put16(a, b);
}

void dc_ns_put32(u_long a, u_char *b)
{
    ns_put32(a, b);
}

int dc_ns_initparse(const u_char *a, int b, ns_msg *c)
{
    return ns_initparse(a, b, c);
}

int dc_ns_skiprr(const u_char *a, const u_char *b, ns_sect c, int d)
{
    return ns_skiprr(a, b, c, d);
}

int dc_ns_parserr(ns_msg *a, ns_sect b, int c, ns_rr *d)
{
    return ns_parserr(a, b, c, d);
}

int dc_ns_name_ntol(const u_char *a, u_char *b, size_t c)
{
    return ns_name_ntol(a, b, c);
}

int dc_ns_name_ntop(const u_char *a, char *b, size_t c)
{
    return ns_name_ntop(a, b, c);
}

int dc_ns_name_pton(const char *a, u_char *b, size_t c)
{
    return ns_name_pton(a, b, c);
}

int dc_ns_name_unpack(const u_char *a, const u_char *b, const u_char *c, u_char *d, size_t e)
{
    return ns_name_unpack(a, b, c, d, e);
}

int dc_ns_name_pack(const u_char *a, u_char *b, int c, const u_char **d, const u_char **e)
{
    return ns_name_pack(a, b, c, d, e);
}

int dc_ns_name_uncompress(const u_char *a, const u_char *b, const u_char *c, char *d, size_t e)
{
    return ns_name_uncompress(a, b, c, d, e);
}

int dc_ns_name_compress(const char *a, u_char *b, size_t c, const u_char **d, const u_char **e)
{
    return ns_name_compress(a, b, c, d, e);
}

int dc_ns_name_skip(const u_char **a, const u_char *b)
{
    return ns_name_skip(a, b);
}

void dc_ns_name_rollback(const u_char *a, const u_char **b, const u_char **c)
{
    ns_name_rollback(a, b, c);
}

