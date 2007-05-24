/* ----------------------------------------------------------------------------
   (c) The University of Glasgow 2004

   Interface for code in execvpe.c
   ------------------------------------------------------------------------- */

#include "HsProcessConfig.h"

#include <errno.h>
#include <sys/types.h>
#if HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
extern int execvpe(char *name, char *const argv[], char **envp);
extern void pPrPr_disableITimers (void);
#endif

