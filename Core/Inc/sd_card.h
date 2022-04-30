#ifndef SD_CARD_H_
#define SD_CARD_H_

#include "fatfs.h"
#include "string.h"
#include "stdio.h"

extern void SDCard_debug(char *string);

void SDCard_mount(const TCHAR* path);
void SDCard_unmount(const TCHAR* path);
void SDCard_checkSpace(void);
FRESULT SDCard_scan(char* pat);
FRESULT SDCard_removeFiles(void);
FRESULT SDCard_writeFile(char *name, char *data);
FRESULT SDCard_readFile (char *name);
FRESULT SDCard_createFile (char *name);
FRESULT SDCard_removeFile(char *name);
FRESULT SDCard_createDirectory(char *name);
FRESULT SDCard_updateFile (char *name, char *data);

#endif /* SD_CARD_H_ */
