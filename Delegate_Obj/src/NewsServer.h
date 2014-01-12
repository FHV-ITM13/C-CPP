/*
 * NewsServer.h
 *
 *  Created on: 08.01.2014
 *      Author: Stefan
 */

#ifndef NEWSSERVER_H_
#define NEWSSERVER_H_

#include <list>
using namespace std;

class INewsConsumer {
    public:
		INewsConsumer () {}
		virtual ~INewsConsumer() {}
        virtual void consume(string value) = 0;
};

class NewsServer {
public:
	NewsServer() {

	}

	~NewsServer() {
		notifiers.clear();
	}

	void reg(INewsConsumer &observer) {
		notifiers.push_back(&observer);
	}

	void unreg(INewsConsumer &observer) {
		notifiers.remove(&observer);
	}

	void propergate(string value) {
		list<INewsConsumer*>::iterator iter(notifiers.begin());

		while ( iter != notifiers.end() )
		{
			(*iter)->consume(value);
			++iter;
		}
	}

private:
	std::list<INewsConsumer*> notifiers;
};

#endif /* NEWSSERVER_H_ */
