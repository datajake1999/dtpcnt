
#ifndef INPOUT32_HELPER_H
#define INPOUT32_HELPER_H

BOOL OpenInpOut32(void);
void CloseInpOut32(void);
void outportb(unsigned short PortAddress, unsigned short Data);
unsigned char inportb(unsigned short PortAddress);

#endif /*INPOUT32_HELPER_H*/
