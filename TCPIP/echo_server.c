#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, const char* argv[])
{
	int server_sock = 0;              //server socket
	int client_sock = 0;           
	char message[BUFSIZ] = {'\0'};
	socklen_t client_add_size = 0ul;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdbool.h>


	if(argc != 2)
	{
		puts("./ECHO_SERVER 9999 \r\n");
		exit(1);
	}

	struct sockaddr_in server_addr;
	struct sockaddr_in client_addr;

	memset(&server_addr, 0, sizeof(server_addr));
	memset(&client_addr, 0, sizeof(client_addr));

	server_sock = socket(PF_INET, SOCK_STREAM, 0);
	if(server_sock == -1)
	{
		return 0;
	}

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(atoi(argv[1]));

	if(bind(server_sock, (const struct sockaddr*)&server_addr, sizeof(server_addr)) == -1)
	{
		fprintf(stderr, "%s\r\n", "bind() error");
		exit(1);
	}

	if(listen(server_sock, 5) == -1)
	{
		fprintf(stderr, "%s\r\n", "listen() error");
		exit(1);
	}

	for(int i = 0 ; i < 5 ; ++i)
	{
		accept(server_sock, (struct sockaddr*)&client_addr, (socklen_t*)&client_add_size);
		if(client_sock == -1)
		{
			fprintf(stderr, "%s\r\n", "accept() error");
			exit(1);
		}
		fprintf(stdout, "%d   %s\r\n", client_sock, " is connected..");

		while(read(client_sock, message, BUFSIZ) != 0)
		{
			write(client_sock, message, str_length);
		}
		close(client_sock);
	}
	close(server_sock);

	return 0;
}
