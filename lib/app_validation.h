 #include <iostream>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <sys/types.h>

 #include "md5_wrapper.h"

 // 仅适用于 linux
 char* getPIDPath(int pid) {
     char file[32];
      char* buf = (char *)malloc(sizeof(char)*64);
      pid_t tpid = (pid_t)pid;
      sprintf(file, "/proc/%i/cmdline", tpid);
      FILE *f = fopen(file, "r");
      fgets(buf, 64, f);
      fclose(f);
      //printf("\n=== %s",buf);
      return buf;
  }

  bool appValidate(const char* path){

      char md5_sum[MD5_STR_LEN+1];
      int rst  = Compute_file_md5(path, md5_sum);
      if (rst != 0)
      {
          fprintf(stderr, "compute md5 failed by %s", path);
          return false;
      }

      if (strcmp(md5_sum, "1c09ac94dc87a53687a0654d1150910b") == 0)
      {
          /* code */
          return true;
      }
      
      return false;
  }
