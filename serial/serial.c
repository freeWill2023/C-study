
//int count = 0; // 전역변수

int getSerialNumber(void)
{
	static int count = 0;
	return ++count;
}
