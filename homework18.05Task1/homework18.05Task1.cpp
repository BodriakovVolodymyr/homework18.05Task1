

#include <iostream>
#include "WebBrowser.h"

int main()
{
	MyStack<string> st;
	st.push("Google.com");
	st.push("Google/search?q=wikipedia");
	st.push("uk.wikipedia.org");
	st.push("uk.wikipedia.org/random_article");
	st.push("uk.wikipedia.org/wiki/Columbia_University_School_of_the_Arts");

	st.show();

	
}
