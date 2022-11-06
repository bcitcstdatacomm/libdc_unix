#include <resolv.h>

int dc_res_hnok(const char *);
int dc_res_ownok(const char *);
int dc_res_mailok(const char *);
int dc_res_dnok(const char *);
int dc_b64_ntop(u_char const *, size_t, char *, size_t);
int dc_b64_pton(char const *, u_char *, size_t);
int dc_dn_skipname(const u_char *, const u_char *);
int dc_dn_comp(const char *, u_char *, int, u_char **, u_char **);
int dc_dn_expand(const u_char *, const u_char *, const u_char *, char *, int);
int dc_res_ninit(res_state);
int dc_res_nquery(res_state, const char *, int, int, u_char *, int);
int dc_res_nsearch(res_state, const char *, int, int, u_char *, int);
int dc_res_nquerydomain(res_state, const char *, const char *, int, int, u_char *, int);
int dc_res_nmkquery(res_state, int, const char *, int, int, const u_char *, int, const u_char *, u_char *, int);
int dc_res_nsend(res_state, const u_char *, int, u_char *, int);
void dc_res_nclose(res_state);

