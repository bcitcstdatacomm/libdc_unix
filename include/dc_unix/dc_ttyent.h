#include <ttyent.h>


struct ttyent *dc_getttyent(void);
struct ttyent *dc_getttynam(const char *);
int dc_setttyent(void);
int dc_endttyent(void);
