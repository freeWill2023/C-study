#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, const char* argv[])
{
	int sock_fd = 0; // file descriptor
	char message[BUFSIZ] = {'\0'};
	int str_length = 0;
	int receive_length = 0;
	int receive_cout = 0;
	struct sockaddr_in serv_addr;

	if(argc != 3)
	{
		puts("./ECHO_CLIENT 127.0.0.1 9999\r\n");
		exit(1);
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	
	sock_fd = socket(PF_INET, SOCK_STREAM, 0);
	if(sock_fd == -1)
	{
		fprintf(stderr, "socket() error\r\n");
		exit(1);
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
	serv_addr.sin_port = htons(atoi(argv[2]));
	
	if(connect(sock_fd, (const struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
	{
		puts("connect() error\r\n");
		exit(1);
	}
	else
	{
		puts("connected....");
	}

	while(true)
	{
		fputs("Input message (Q to quit): ", stdout);
		fgets(message, BUFSIZ, stdin);
		if(!strcmp(message, "q\n") || !strcmp(message, "Q\n"))
		{
			puts("종료\r\n");
			break;
		}
		//str_length = write(sock_fd, message, strlen(message));
		//receive_length = 0;
		//while(receive_length < str_length)
		//{
		//	receive_cout = read(sock_fd, &message[receive_length], BUFSIZ-1);
		//	if(receive_cout == -1)
		//	{
		//		printf("read() error\r\n");
		//	}
		//	receive_length += receive_cout;
		//}
		
		write(sock_fd, message, strlen(message));
		str_len = read(sock_fd, message, BUFSIZ-1);

		message[receive_length] = 0;
		fprintf(stdout, "Message from the sever: %s\r\n", message);
	}
	close(sock_fd);

	return 0;
}
