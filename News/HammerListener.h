/*
 * HammerListener.h
 *
 *  Created on: 20.01.2014
 *      Author: johannes
 */

#ifndef HAMMERLISTENER_H_
#define HAMMERLISTENER_H_

#include <string>
#include <iostream>
#include <ostream>
#include "NewsServer.h"

class HammerListener: public NewsListener {
public:
	HammerListener() {
	}
	virtual ~HammerListener() {
	}

	void receive(NewsServer* server, string data) {
		cout << "Hammer: " << data << endl;
	}
};

#endif /* HAMMERLISTENER_H_ */
