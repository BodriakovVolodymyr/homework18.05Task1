

#include <iostream>
#include "WebBrowser.h"

int main()
{
	WebBrowser browser;
	browser.visit("Google.com");
	browser.visit("Google/search?q=wikipedia");
	browser.visit("uk.wikipedia.org");
	browser.visit("uk.wikipedia.org/random_article");
	browser.visit("uk.wikipedia.org/wiki/Columbia_University_School_of_the_Arts");

	cout << endl;
	browser.showHistory();

	browser.back();
	browser.back();
	browser.showHistory();
	
	browser.forward();
	browser.showHistory();
}
