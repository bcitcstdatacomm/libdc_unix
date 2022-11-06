#include "sys/dc_mount.h"


int	dc_unmount(const char *a, int b)
{
#ifdef __linux__
    return umount2(a, b);
#else
    return unmount(a, b);
#endif
}
