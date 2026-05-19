#pragma once
#include"MyStack.h"
#include <string>

class WebBrowser
{
private:
	MyStack<string>back_page;
	MyStack<string>forward_page;
public:
	void visit(const string& url)
	{
		back_page.push(url);
		forward_page.pop();

		cout << "Visit: " << url << endl;
	}

	string back() {
		if(back_page.isEmpty())
		{
			cout << "History is empty";
		}
		string current = back_page.top();
		back_page.pop();
		forward_page.push(current);

		if (back_page.isEmpty())
		{
			return "No previous page";
		}
		return back_page.top();
	}


	string forward()
	{
		if (forward_page.isEmpty())
		{
			return "No forward page";
		}
		string url = forward_page.top();
		forward_page.pop();
		back_page.push(url);
		return url;
	}

	void showHistory()
	{
		cout << "History: \n";
		back_page.show();
	}
};
