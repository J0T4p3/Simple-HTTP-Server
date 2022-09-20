#include "BindSocket.hpp"

namespace HDE
{
    // Construtor
    BindSocket::BindSocket(int domain, int service, int protocol, int port, u_long interface1) : SimpleSocket(domain, service, protocol, port, interface1)
    {
        set_connection(connect_to_network(get_sock(), get_adress()));
        test_connection(get_connection());
    }

    // Definição da função connect_to_network
    int BindSocket::connect_to_network(int sock, struct sockaddr_in address)
    {
        return bind(sock, (struct sockaddr *)&address, sizeof(address));
    }
}