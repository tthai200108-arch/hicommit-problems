#include <stdio.h>
int main() 
{
  int code;
   if(scanf("%d", &code) !=1) return 0;
  switch (code) {
    case 1:
        printf("XEP_LOAI_XUAT_SAC\n");
        break;
    case 2:
        printf("XEP_LOAI_GIOI\n");
        break;
    case 3:
        printf("XEP_LOAI_KHA\n");
        break;
    case 4:
        printf("XEP_LOAI_TRUNG_BINH\n");
        break;
    default:
        printf("KHONG_HOP_LE");
        break;
    
  
  }
  return 0;
}