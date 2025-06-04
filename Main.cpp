#include "WebServer.h"

int main()
{
	WebServer webServer("0.0.0.0", 8080);
	if (webServer.init() != 0)
		return 1;

	webServer.run();

	system("pause");
	return 0;
}
