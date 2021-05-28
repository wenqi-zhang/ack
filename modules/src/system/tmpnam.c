/*  Copyright (c) 2019. See the file License in
 *  the root directory for more information.
 *
 *  Created on: 2019-03-13
 *  
 */
#include <stdio.h>

/* This has been placed here, because on some famous platforms, this
 * call is completely broken (e.g Windows up to recent versions of CRT)
 */
char* sys_tmpnam(char *buffer)
{
	int fd,ret;
	strcpy(buffer,"/data/data/com.termux/files/usr/tmp/XXXXXX");
	fd=mkstemp(buffer);
	ret=((fd==-1)?0:1);
	close(fd);
	return ret;
}

