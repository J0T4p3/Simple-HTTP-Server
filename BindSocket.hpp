#ifndef BindSocket_hpp
#define BindSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
    class BindSocket: public SimpleSocket
    {
        public:
            // Construtor
            BindSocket(int domain, int service, int protocol, int port, u_long interface1);
            // Função virtual do parent
            int connect_to_network(int sock, struct sockaddr_in adress);
    };
}

#endif