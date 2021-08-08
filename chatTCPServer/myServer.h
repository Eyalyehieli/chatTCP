#ifndef MYSERVER_H_INCLUDED
#define MYSERVER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

#define PORT 4950
#define BUFSIZE 1024

void send_to_all(int j, int i, int sockfd, int nbytes_recvd, char *recv_buf, fd_set *master);
void send_recv(int i, fd_set *master, int sockfd, int fdmax);
void connection_accept(fd_set *master, int *fdmax, int sockfd, struct sockaddr_in *client_addr);
void connect_request(int *sockfd, struct sockaddr_in *my_addr);
void initServer(fd_set* master,fd_set* read_fds,int* sockfd,struct sockaddr_in* my_addr,int* fdmax);
void proccesServer(fd_set* read_fds,fd_set* master,int* fdmax,int* sockfd,struct sockaddr_in* client_addr);

#endif // MYSERVER_H_INCLUDED
