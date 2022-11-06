#include <fstab.h>


struct fstab *dc_getfsent(void);
struct fstab *dc_getfsspec(const char *);
struct fstab *dc_getfsfile(const char *);
int dc_setfsent(void);
void dc_endfsent(void);

