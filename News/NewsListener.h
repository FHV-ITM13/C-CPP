/*
 * NewsListener.h
 *
 *  Created on: 20.01.2014
 *      Author: johannes
 */

#ifndef NEWSLISTENER_H_
#define NEWSLISTENER_H_

#include <string>
#include <iostream>
#include <ostream>

using namespace std;

class NewsServer;

class NewsListener {
public:
	NewsListener() {
	}
	NewsListener(string name) {
		_name = name;
	}
	virtual void receive(NewsServer* server, string data) {
		cout << _name << ": " << data << endl;
	}

private:
	string _name;
};

class NewsServer {
public:
	NewsServer() {
	}
	virtual ~NewsServer() {
	}

	virtual void send(string data) {
		std::list<NewsListener*>::iterator iter = listeners.begin();

		while (iter != listeners.end()) {
			(*iter)->receive(this, data);
			++iter;
		}
	}
	virtual void registerListener(NewsListener* listener) {
		listeners.push_back(listener);
	}

	virtual void deregister(NewsListener* listener) {
		listeners.remove(listener);
	}

private:
	std::list<NewsListener*> listeners;

};

#endif /* NEWSLISTENER_H_ */
