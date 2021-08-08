#ifndef MYCLIENT_H_INCLUDED
#define MYCLIENT_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>

#define BUFSIZE 1024

void connect_request(int *sockfd, struct sockaddr_in *server_addr);
void send_recv(int i, int sockfd);
void initClient(int* sockfd,struct sockaddr_in* server_addr,fd_set* master,fd_set* read_fds,int * fdmax);
void processClient(fd_set* read_fds,fd_set* master,int* fdmax,int* sockfd);
void closeClient(int sockfd);
#endif // MYCLIENT_H_INCLUDED
