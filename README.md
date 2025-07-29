Custom HTTP Server in C++ 
  -This is a multiclient HTTP server built from scratch using C++ and Winsock. It serves static web content (like .html, .css, and .png files) directly from a folder, no external frameworks or libraries required. 
  -Built as a hands-on way to learn C++ and network programming, turns out writing your own web server is a great crash course. 
  
Features 
  -Serves multiple clients using select() and raw sockets 
  -Parses GET requests and serves requested files 
  -Supports static files: .html, .css, .png 
  -Custom handling for missing files (404) 
  -Simple multi-page demo site included 

How to Run 
  -Clone the repo: git clone https://github.com/BoxToc/custom-webserver
  -cd custom-webserver 
  -Open in Visual Studio (uses Winsock/Windows) 
  -Run the project — then visit: http://localhost:8080/ 
  
File Structure 
  Webserver 
    -Main.cpp			>Entry point 
    -WebServer.h/.cpp		>HTTP request parsing & response 
    -TcpListener.h/.cpp    		>Socket handling & select() loop 
    -MultiClientChat. *     		 >(optional legacy/test files) 
    
  Webroot/ 				>Files served to browser 
    -Index.html 
    -About.html 
    -Style.css 
    -favicon.ico (.png) 
    
