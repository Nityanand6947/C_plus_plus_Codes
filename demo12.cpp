#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib") // Link with the Windows Sockets library

int main() {
    WSADATA wsaData;
    SOCKET clientSocket;
    sockaddr_in serverAddr;

    // Initialize WinSock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed with error: " << WSAGetLastError() << std::endl;
        return 1;
    }

    // Create the socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        std::cerr << "Socket creation failed with error: " << WSAGetLastError() << std::endl;
        WSACleanup();
        return 1;
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8080);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server's IP address

    // Connect to the server
    if (connect(clientSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "Connect failed with error: " << WSAGetLastError() << std::endl;
        closesocket(clientSocket);
        WSACleanup();
        return 1;
    }

    // Receive data from the server
    char buffer[512];
    int result = recv(clientSocket, buffer, sizeof(buffer), 0);
    if (result > 0) {
        buffer[result] = '\0';
        std::cout << "Received from server: " << buffer << std::endl;
    }

    // Cleanup
    closesocket(clientSocket);
    WSACleanup();

    return 0;
}
