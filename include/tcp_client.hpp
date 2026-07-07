#pragma once

#include <string>
#include <netdb.h>

class TCPClient {
private:
    int sockfd;
    struct sockaddr_in server_addr;

public:
    TCPClient();
    ~TCPClient();

    bool connetToServer(const std::string& ip, int port);
    bool sendMessage(const std::string& message);
    bool recieveMessage();
    void closeConnection();
    bool isConnected();

};