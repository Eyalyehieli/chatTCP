#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include "myClient.h"


int main()
{
	int sockfd, fdmax;
	struct sockaddr_in server_addr;
	fd_set master;
	fd_set read_fds;
	// TODO: Print usage

	initClient(&sockfd,&server_addr,&master,&read_fds,&fdmax);

	while(1){
		processClient(&read_fds,&master,&fdmax,&sockfd);
	}
	closeClient(sockfd);

	return 0;
}
