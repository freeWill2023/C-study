#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main(int argc, const char* argv[])
{
	int sock = 0;

	struct sockaddr_in serv_addr;

	memset(&serv_addr, 0, sizeof(serv_addr)); // serv_add 0으로 초기화
	
	char msg_buffer[BUFSIZ]; // BUFSIZ => 512
	// ./HELLO_CLIENT 127.0.0.1 or 10.10.20.108 9999
	if(argc != 3)
	{
		printf("%s\r\n","사용방법 ./HELLO_CLIENT 127.0.0.1 9999" );
		return 0;
	}
	
	// O/S기반 소켓생성: IPv4       TCP      IP-PROTO--------------------------------------------
	sock = socket(PF_INET, SOCK_STREAM, 0);
	if(sock == -1)
	{
		fputs("socket() error\r\n", stderr);
		return 0;
	}

	serv_addr.sin_family = AF_INET; // IPv4
	serv_addr.sin_addr.s_addr = inet_addr(argv[1]); // 서버 IP 문자"127.0.0.1", -> inet() -> 숫자 127.0.0.1
	serv_addr.sin_port = htons(atoi(argv[2])); // "9999" -> 9999

	// connect ---------------------------------------------------------------------------------
	int	con_state =	connect(sock, (const struct sockaddr*)&serv_addr, sizeof(serv_addr));
	if(con_state == -1)
	{
		fputs("connect() error\r\n", stderr);
		return 0;
	}

	// read()/write() ---------------------------------------------------------------------------
	int string_length =	read(sock, msg_buffer, sizeof(msg_buffer)-1);
	if(string_length == -1)
	{
		fputs("read() error\r\n", stderr);
	}

	//puts(msg_buffer);
	//printf("\r\n");
	
	printf("Message from server: %s \n", msg_buffer);
	close(sock);

	return 0;
}
