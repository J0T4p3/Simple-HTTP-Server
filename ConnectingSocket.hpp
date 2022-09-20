#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
    class ConnectingSocket: public SimpleSocket
    {
        public:
            // Construtor
            ConnectingSocket(int domain, int service, int protocol, int port, u_long interface1);
            // Função virtual do parent
            int connect_to_network(int sock, struct sockaddr_in adress);
    };
}

#endif