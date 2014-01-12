/*
  * Consumer.h
 *
 *  Created on: 11.01.2014
 *      Author: Stefan
 */

#ifndef CONSUMER_H_
#define CONSUMER_H_

#include "NewsServer.h"

class Consumer : public INewsConsumer {
public:
	Consumer(string name) {
		Consumer::name = name;
	}

	virtual ~Consumer() {

	}

	virtual void consume(string value) {
		cout << name << ":" << 	value << endl;
	}

private:
	string name;
};


#endif /* CONSUMER_H_ */
