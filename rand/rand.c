static int seed; //static : 전역변수를 *.c파일에서만 사용가능
                 // random함수의 시작값으로 

void my_srand(int s)
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345;
	
	return ((unsigned)(seed / 65536) % 32768);
}
