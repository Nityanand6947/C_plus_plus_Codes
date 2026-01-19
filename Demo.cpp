#include <iostream>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

using namespace std;

int main()
{
    // Creating socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        cerr << "Socket creation failed!" << endl;
        return -1;
    }

    // Specifying the address
    sockaddr_in serverAddress;
    memset(&serverAddress, 0, sizeof(serverAddress));  // Zero out the structure
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);               // Port 8080
    serverAddress.sin_addr.s_addr = INADDR_ANY;         // Accept connections from any IP address

    // Binding socket
    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        cerr << "Bind failed!" << endl;
        close(serverSocket);  // Close socket before exiting
        return -1;
    }

    // Listening to the assigned socket
    if (listen(serverSocket, 5) == -1) {
        cerr << "Listen failed!" << endl;
        close(serverSocket);  // Close socket before exiting
        return -1;
    }

    // Accepting a connection request
    int clientSocket = accept(serverSocket, nullptr, nullptr);
    if (clientSocket == -1) {
        cerr << "Accept failed!" << endl;
        close(serverSocket);  // Close server socket before exiting
        return -1;
    }

    // Receiving data
    char buffer[1024] = { 0 };
    ssize_t bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
    if (bytesReceived == -1) {
        cerr << "Receive failed!" << endl;
    } else {
        cout << "Message from client: " << buffer << endl;
    }

    // Closing the sockets
    close(clientSocket);
    close(serverSocket);

    return 0;
}
