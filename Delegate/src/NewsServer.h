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

template<typename T>
class NewsServer {
public:
	typedef void (*func_ptr)(const T&);

	NewsServer() {

	}
	~NewsServer() {

	}
	void reg(func_ptr test) {
		if(test != 0) {
			notifiers.push_back(test);
		}
	}
	void unreg(func_ptr test) {
		if(test != 0) {
			notifiers.remove(test);
		}
	}
	void propergate(const T& value) {
		typename list<func_ptr>::iterator iter = notifiers.begin();

		while ( iter != notifiers.end() )
		{
			(*iter)(value);
			++iter;
		}
	}

private:
	std::list<func_ptr> notifiers;
};
#endif /* NEWSSERVER_H_ */
