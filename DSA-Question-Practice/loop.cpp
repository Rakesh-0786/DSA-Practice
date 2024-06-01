#include<bits/stdc++.h>
using namespace std;

int main(){
    // int i;

//     for(i=0; i<=10; i++){
//         cout<<"Rakesh"<<endl;
//     }
// cout<<i<<endl;



// while

// int i=1;
// while(i<=5){
//     cout<< "Rakesh" << i<<endl;
//     i=i+1;
// }
// return 0;

// }



// do while
int i=2;
do{
    cout<<"Rakesh" << i<< endl;
    i++;

}while(i<=1);
return 0;
}


/* The WebSocket API is an advanced technoogy that
 makes it possible to open a two-way interactuve communication 
 session between the user's browser and a server .
 With this API you can send messages to a server and 
 receive event-driven resposes without having to poll 
 the server for a reply.

 or we can say that :-
WebSocket is a communication protocol that provides
full-duplex communication(allow simultaneous transmitting 
and receiving.) channels over a single TCP connection.
It enables bidirectional communication between clients and servers,
allowing data to be exchanged in real time with low latency(Minimal delay or delay variation).

Used:-

Real-time Web Applications: WebSocket is ideal for building real-time web applications that require low-latency communication between clients and servers. Examples include chat applications, online gaming, collaborative editing tools, and financial trading platforms.

Efficient and Lightweight: WebSocket is more efficient and lightweight compared to traditional HTTP-based communication methods, such as long-polling or server-sent events (SSE). WebSocket eliminates the overhead of HTTP headers and reduces latency by maintaining a persistent connection between the client and server.

Bidirectional Communication: Unlike HTTP, which is a request-response protocol, WebSocket enables bidirectional communication, allowing both the client and server to initiate data transfer. This capability is crucial for applications that require real-time updates from the server without the need for repeated polling.

Lower Latency: WebSocket significantly reduces latency compared to traditional HTTP-based communication methods. By maintaining a persistent connection, WebSocket eliminates the need for frequent connection establishment and teardown, resulting in faster data transmission and response times.

Scalability and Performance: WebSocket can scale to support large numbers of concurrent connections efficiently. Since WebSocket connections are long-lived and lightweight, servers can handle thousands or even millions of simultaneous connections without significant resource consumption.

Cross-domain Communication: WebSocket supports cross-origin communication, allowing clients to establish WebSocket connections with servers hosted on different domains. This enables the development of distributed and collaborative applications that span multiple servers and domains.

Standardized Protocol: WebSocket is standardized by the Internet Engineering Task Force (IETF) as RFC 6455, ensuring interoperability between different implementations and making it widely adopted across various programming languages and platforms.


Polling and Server-Sent Events (SSE) are two different approaches used for achieving real-time communication between web clients (such as browsers) and servers

Polling:Polling is a technique where the client repeatedly sends requests to
 the server at regular intervals to check for updates. The server responds to 
 each request, either with new data if updates are available or with an empty response
  if there are no updates. The client then processes the response and initiates another
   request after a certain interval.

   Server-Sent Events (SSE):
Server-Sent Events (SSE) is a technology that enables servers 
to push real-time updates to clients over a single, long-lived 
HTTP connection. Unlike polling, where the client initiates requests, 
SSE establishes a persistent connection from the client to the server, 
allowing the server to send updates to the client whenever new data becomes available.



Event Driven:-
In WebSocket, event-driven responses refer to the mechanism by which 
communication between the client and server is handled. Unlike traditional HTTP
 communication, where the client initiates a request and the server responds,
  WebSocket enables bidirectional communication where either the client or the server 
  can send messages at any time without waiting for a request.

Event-driven responses in WebSocket work on the principle of asynchronous communication. The server can push data to the client whenever new information is available, and the client can react to these events in real-time without the need for continuous polling or periodic requests.


HTTP internally works for TCP and webSocket works for TCP.
So the websockets internally works on TCP.
 And Modern browsers do gives us a capability to actually use WebSockets

 More uses:-
 1.Chat appliacation.
 2.Notification tab.
 3.email

 Websocket is also called the two-way pipeling.
 In which the clients and the server both os them can send and receive
 the messages simulatneously.it means if the server wants it can send the messages
 and if the clients wants the clients also send the messages simultaneously.
 And at any time the server can push the messages to the client using two way pipelining.
 Thats way the socket say that it a two way connection.


 Now  a lot of languages have got a lot of different ways to actually support Sockets
 for example if you use something like ruby or rales on server side 
 then there is something called as Action Cable that is used for socket
 
 
 What is Socket.IO :-
 Socket.IO is a library that enables low-laltency, bidirectional and event-based communication between a client and a server.

 Rooms:-
 A room is an arbitrary channel that sockets can join and leave. It can be used to broadcast events to a subset of clients:

Joining and leaving
You can call join to subscribe the socket to a given channel:

io.on("connection", socket => {
  socket.join("some room");
});

And then simply use to or in (they are the same) when broadcasting or emitting:

io.to("some room").emit("some event");

You can emit to several rooms at the same time:

io.to("room1").to("room2").to("room3").emit("some event");

In that case, a union is performed: every socket that is at least in one of the rooms will get the event once (even if the socket is in two or more rooms).

You can also broadcast to a room from a given socket:

io.on("connection", function(socket){
  socket.to("some room").emit("some event");
});
 */