#include <sys/mount.h>


int	dc_fhopen(const struct fhandle *, int);
int	dc_fstatfs(int, struct statfs *);
int	dc_getfh(const char *, fhandle_t *);
int	dc_getfsstat(struct statfs *, long, int);
int	dc_getmntinfo(struct statfs **, int);
int	dc_mount(const char *, const char *, int, void *);
int	dc_statfs(const char *, struct statfs *);
int	dc_unmount(const char *, int);
