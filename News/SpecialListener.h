/*
 * SpecialListener.h
 *
 *  Created on: 20.01.2014
 *      Author: johannes
 */

#ifndef SPECIALLISTENER_H_
#define SPECIALLISTENER_H_

#include <string>
#include <iostream>
#include <ostream>
#include "NewsServer.h"

class SpecialListener: public NewsListener {
public:
	SpecialListener() {
	}
	virtual ~SpecialListener() {
	}

	void receive(NewsServer* server, string data) {
		cout << "Special: " << data << endl;
	}
};

#endif /* SPECIALLISTENER_H_ */
