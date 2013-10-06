#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <bsd/md5.h>

int main() {
  MD5_CTX context;
  FILE *hashfile;
  char oldhash[33];
  char newhash[33];
  char password[32];
  hashfile=fopen("hash.txt","r");
  fgets(oldhash,33,hashfile);
  printf("What is the password?\n");
  fgets(password,16,stdin);
  MD5Init(&context);
  MD5Update(&context,password,strlen(password));
  MD5End(&context,newhash);
  if(!strncmp(oldhash,newhash,32)) {
    printf("Access Granted\n");
  } else {
    printf("Access Denied\n");
  }
  return 0;
}
