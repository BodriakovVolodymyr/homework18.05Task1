

#include <iostream>
#include "WebBrowser.h"

int main()
{
	MyStack<string> st;
	st.push("Google.com");
	st.push("Google/search?q=wikipedia");
	st.push("uk.wikipedia.org");
	st.push("uk.wikipedia.org/random_article");
	st.push("uk.wikipedia.org/wiki/Школа_мистецтв_Колумбійського_університету");

	st.show();
}
