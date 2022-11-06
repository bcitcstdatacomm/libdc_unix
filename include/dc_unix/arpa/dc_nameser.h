#include <arpa/nameser.h>


int dc_ns_msg_getflag(ns_msg, int);
u_int dc_ns_get16(const u_char *);
u_long dc_ns_get32(const u_char *);
void dc_ns_put16(u_int, u_char *);
void dc_ns_put32(u_long, u_char *);
int dc_ns_initparse(const u_char *, int, ns_msg *);
int dc_ns_skiprr(const u_char *, const u_char *, ns_sect, int);
int dc_ns_parserr(ns_msg *, ns_sect, int, ns_rr *);
int dc_ns_sprintrr(const ns_msg *, const ns_rr *, const char *, const char *, char *, size_t);
int dc_ns_format_ttl(u_long, char *, size_t);
int dc_ns_parse_ttl(const char *, u_long *);
int dc_ns_name_ntol(const u_char *, u_char *, size_t);
int dc_ns_name_ntop(const u_char *, char *, size_t);
int dc_ns_name_pton(const char *, u_char *, size_t);
int dc_ns_name_unpack(const u_char *, const u_char *, const u_char *, u_char *, size_t);
int dc_ns_name_pack(const u_char *, u_char *, int, const u_char **, const u_char **);
int dc_ns_name_uncompress(const u_char *, const u_char *, const u_char *, char *, size_t);
int dc_ns_name_compress(const char *, u_char *, size_t, const u_char **, const u_char **);
int dc_ns_name_skip(const u_char **, const u_char *);
void dc_ns_name_rollback(const u_char *, const u_char **, const u_char **);
int dc_ns_samedomain(const char *, const char *);
int dc_ns_makecanon(const char *, char *, size_t);
int dc_ns_samename(const char *, const char *);
