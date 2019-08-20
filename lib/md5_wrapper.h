
#ifndef MD5_WRAPPER_H
#define MD5_WRAPPER_H


#include <stdio.h>
#include <stdlib.h>

#define READ_DATA_SIZE	1024
#define MD5_SIZE		16
#define MD5_STR_LEN		(MD5_SIZE * 2)

// function declare
int Compute_string_md5(unsigned char *dest_str, unsigned int dest_len, char *md5_str);
int Compute_file_md5(const char *file_path, char *md5_str);

#endif //MD5_WRAPPER_H