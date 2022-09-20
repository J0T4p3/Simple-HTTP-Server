#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

# include <stdio.h>
# include <winsock2.h>
# include <iostream>


namespace HDE
{
    class SimpleSocket
    {
        private:
            struct sockaddr_in address;
            int sock;
            int connection;
        public:
            //Construtor
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface1);
            // Função virtual para se conectar á rede
            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            // Função para testar sockets e conexões
            void test_connection(int);
            // GETs
            struct sockaddr_in get_adress();
            int get_sock();
            int get_connection();
            //SETs
            void set_connection(int domain);
    };
}

#endif