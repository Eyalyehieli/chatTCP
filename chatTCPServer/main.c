#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include "myServer.h"

int main()
{
	fd_set master;
	fd_set read_fds;
	int fdmax;
	int sockfd= 0;
	struct sockaddr_in my_addr, client_addr;

	initServer(&master,&read_fds,&sockfd,&my_addr,&fdmax);

	while(1){
		proccesServer(&read_fds,&master,&fdmax,&sockfd,&client_addr);
	}
	return 0;
}
