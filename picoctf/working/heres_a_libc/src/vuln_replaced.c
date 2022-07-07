#define true 1
#include <stdio.h>
#include <stdint.h>
unsigned int convert_case(unsigned char param_1,unsigned long param_2)

{
  unsigned int uVar1;
  
  if (((char)param_1 < 'a') || ('z' < (char)param_1)) {
    if (((char)param_1 < 'A') || ('Z' < (char)param_1)) {
      uVar1 = (unsigned int)param_1;
    }
    else {
      if ((param_2 & 1) == 0) {
        uVar1 = (unsigned int)param_1;
      }
      else {
        uVar1 = param_1 + 0x20;
      }
    }
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar1 = param_1 - 0x20;
    }
    else {
      uVar1 = (unsigned int)param_1;
    }
  }
  return uVar1;
}


void do_stuff(void)

{
  unsigned int uVar1;
  char local_89;
  unsigned char local_88 [112];
  int64_t local_18;
  unsigned long local_10;
  
  local_18 = 0;
  scanf("%[^\n]",local_88);
  scanf("%c",&local_89);
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    uVar1 = convert_case(local_88[local_10],local_10);
    local_88[local_10] = (unsigned char)uVar1;
  }
  puts((char *)local_88);
  return;
}

void main(int32_t param_1,int64_t param_2)

{
  unsigned int uVar1;
  char acStack168 [24];
  int64_t uStack144;
  int64_t local_88;
  int32_t local_7c;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int16_t local_60;
  char local_5e;
  char *local_50;
  int64_t local_48;
  unsigned long local_40;
  __gid_t local_34;
  unsigned long local_30;
  
  uStack144 = 0x40079c;
  local_88 = param_2;
  local_7c = param_1;
  setbuf(stdout,(char *)0x0);
  uStack144 = 0x4007a1;
  local_34 = getegid();
  uStack144 = 0x4007bb;
  setresgid(local_34,local_34,local_34);
  local_40 = 0x1b;
  local_78 = 0x20656d6f636c6557;
  local_70 = 0x636520796d206f74;
  local_68 = 0x6576726573206f68;
  local_60 = 0x2172;
  local_5e = 0;
  local_48 = 0x1a;
  local_50 = acStack168;
  for (local_30 = 0; local_30 < local_40; local_30 = local_30 + 1) {
    uVar1 = convert_case(*(unsigned char *)((long)&local_78 + local_30),local_30);
    local_50[local_30] = (char)uVar1;
  }
  puts(local_50);
  do {
    do_stuff();
  } while( true );
}

