#include "sys/dc_mount.h"


int	dc_fhopen(const struct fhandle *a, int b)
{
    return fhopen(a, b);
}

int	dc_fstatfs(int a, struct statfs *b)
{
    return fstatfs(a, b);
}

int	dc_getfh(const char *a, fhandle_t *b)
{
    return getfh(a, b);
}

int	dc_getfsstat(struct statfs *a, long b, int c)
{
    return getfsstat(a, b, c);
}

int	dc_getmntinfo(struct statfs **a, int b)
{
    return getmntinfo(a, b);
}

int	dc_mount(const char *a, const char *b, int c, void *d)
{
    return mount(a, b, c, d);
}

int	dc_statfs(const char *a, struct statfs *b)
{
    return statfs(a, b);
}

int	dc_unmount(const char *a, int b)
{
    return unmount(a, b);
}
