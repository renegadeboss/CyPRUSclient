#ifndef CYPRUS_CLIENT_H
#define CYPRUS_CLIENT_H


//========= Dependencies ============
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#include <string> 
#include <strings.h> 

#include <sstream> 
#include <sys/utsname.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

//#include <gnutls/gnutls.h> 

#include <exiv2/exiv2.hpp>

//======== Functions =================
int tcp_open(char * address);

int tcp_close(int sd);

//int ssh_verify_cert_callback(gnutls_session_t session);

int populateMetaCom(char * file, char * plate);

int populateMetaExif(std::string file, std::string plate);

void populateMetaBuffer(char * buffer, char * plate);

size_t populateImage(char * buffer, char * image,int sockfd, size_t bufSize);

int sendImageByteArray(char * image,  int sockfd);

#endif
