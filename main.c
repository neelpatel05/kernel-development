#include<system.h>

unsigned char *memcopy(unsigned char *dest, const unsigned char *src, int count)
{
  for(int i=0; i<count; i++)
  {
    dest[i]=src[i];
  }
  return dest;
}

unsigned char *memset(unsigned char *dest, unsigned char val, int count)
{
  while(count!=0)
  {
    *dest=val;
    *dest++;
    count--;
  }
  return dest
}

unsigned short *memsetw(unsigned short *dest, unsigned short val, int count)
{
  for(uint32_t i=0; i<count; i++)
  {
    ((int_32 *)dest)[i] = val;
  }
  return dest
}

int strlen(const char *str)
{
  int count;
  for(int i=0; str[i]!='\0'; i++)
  {
    count++;
  }
  return count;
}

unsigned char importb(unsigned short _port)
{
  unsigned char rv;
  __asm____volatile__("inb %1, %0" : "=a" (rv) : "dN" (_port));
}

void outportb(unsigned short _port, unsigned char _data)
{
  __asm____volatile__("outb %1 , %0" : : "dN" (_port), "a" (_data));
}

void main()
{
  for(;;);
}
