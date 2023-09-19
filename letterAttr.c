#include<stdio.h>
#define bold			0x01 << 0
#define italic		0x01 << 1
#define shadow		0x01 << 2
//#define unferline	0x01 << 3

int main(void)
{
	unsigned char attr;
	attr = attr ^ attr;
	
	printf("attr: 0x%x\n", attr);

	attr = attr | bold;
	printf("attr: 0x%02x\n", attr);

	attr = 0;
	attr = attr | (shadow + italic);
	printf("attr: 0x%02x\n", attr);

	attr = 0;
	attr = attr & (~bold);
	printf("attr: 0x%02x\n", attr);
	
	return 0;
}
