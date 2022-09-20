#include "SimpleSocket.hpp"

namespace HDE{
// Construtor padrão
SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface1)
{
    // Preenche a estrutura do endereço
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface1);
    // Estabelece a conexão com o socket
    sock = socket(domain, service, protocol);
    test_connection(sock);
    // Estabelece a conexão com a rede
    connection = connect_to_network(sock, address);
    test_connection(connection);
}

// Função virtual test connection

void SimpleSocket::test_connection(int item_to_test)
{
    // Confirma se a conexão foi realizada com o socket ou rede
    if (item_to_test < 0) {
        perror("Conexão não estabelecida...");
        exit(EXIT_FAILURE);
    }
    
}

// Funções GETs

struct sockaddr_in SimpleSocket::get_adress()
{
    return address;
}

int SimpleSocket::get_sock()
{
    return sock;
}

int SimpleSocket::get_connection()
{
    return connection;
}

// Funções SETs

void SimpleSocket::set_connection(int domain)
{
    connection = domain;
}

}