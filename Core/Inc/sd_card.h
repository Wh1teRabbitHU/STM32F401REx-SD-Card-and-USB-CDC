#ifndef SD_CARD_H_
#define SD_CARD_H_

#include "fatfs.h"
#include "string.h"
#include "stdio.h"

extern void SDCard_debug(char *string);

FRESULT SDCard_mount(const TCHAR* path);
FRESULT SDCard_unmount(const TCHAR* path);
FRESULT SDCard_checkSpace(void);
FRESULT SDCard_scanFolder(char* folder, uint8_t maxItems, uint8_t maxPathLength, char foundItems[maxItems][maxPathLength]);
FRESULT SDCard_removeFiles(void);
FRESULT SDCard_writeFile(char *name, char *data);
FRESULT SDCard_readFile (char *name);
FRESULT SDCard_createFile (char *name);
FRESULT SDCard_removeFile(char *name);
FRESULT SDCard_createDirectory(char *name);
FRESULT SDCard_updateFile (char *name, char *data);

#endif /* SD_CARD_H_ */
