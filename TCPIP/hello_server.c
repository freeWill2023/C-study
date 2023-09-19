#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //리눅스설정  파일
#include <sys/socket.h> //소켓 관련 파일
#include <arpa/inet.h> // IP 설정관련

int main(int argc, const char* argv[])
{
	int serv_sock = 0;
	int client_sock = 0;

	struct sockaddr_in serv_address;
	struct sockaddr_in client_address;

	socklen_t client_address_size = 0ul;

	const char message[] = {"Welcome_my_server!"};
	if(argc != 2)
	{
		printf("Use: %s 9999\r\n", argv[0]);
		return 0;
	}
	
	// O/S기반 소켓생성: IPv4       TCP      IP-PROTO--------------------------------------------
	serv_sock = socket(PF_INET, SOCK_STREAM, 0); //IPv4, TCP, IP-PROTO
	printf("Bridge: %d\r\n", serv_sock); //-> 3
	
	if(serv_sock == -1)
	{
		fputs("%s \r\n", "socket()_error!");
		return 0;
	}

	memset(&serv_address, 0, sizeof(serv_address)); // 모두 0으로 초기화
	memset(&client_address, 0, sizeof(client_address));

	serv_address.sin_family = AF_INET; //PF_INET == AF_INET -> IPv4
	serv_address.sin_addr.s_addr = htonl(INADDR_ANY); //-> 127.0.0.1 // 10.0.2.15->8진수로 변환
	serv_address.sin_port = htons(atoi(argv[1])); //-> port No: 문자 9999 -> 숫자9999

	// bind: IP, PORT -----------------------------------------------------------------------------
	int bind_status = bind(serv_sock, (const struct sockaddr*)&serv_address, sizeof(serv_address));
	if(bind_status == -1)
	{
		fputs("bind() error\r\n", stderr);
		return 0;
	}

	// listen ------------------------------------------------------------------------------------
	int listen_state = listen(serv_sock, 5);
	if(listen_state == -1)
	{
		fputs("listen() error\r\n", stderr);
		return 0;
	}

	// accept : 접속한 client정보 저장 ------------------------------------------------------------
	client_sock = accept(serv_sock, (struct sockaddr*)&client_sock, (socklen_t*)&client_address);
	fprintf(stdout, "%s: %d\r\n" , "Client Bridge", client_sock);
	if(client_sock == -1)
	{
		fputs("accept() error\r\n", stderr);
		return 0;
	}

	client_address_size = sizeof(client_address); //accept() 실행 후 값들이 바뀐 사이즈 업데이트

	// read()/write()-----------------------------------------------------------------------------
	write(client_sock, message, sizeof(message));

	close(client_sock);
	close(serv_sock);

	printf("%s\r\n", "Hello Server");
	return 0;
}

