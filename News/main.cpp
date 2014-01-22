/*
 * main.cpp
 *
 *  Created on: 20.01.2014
 *      Author: johannes
 */

#include "SpecialListener.h"
#include "HammerListener.h"

int main() {
	NewsListener l1("asdf");
	HammerListener h1;
	SpecialListener s1;

	NewsServer s;
	s.registerListener(&l1);
	s.registerListener(&h1);
	s.registerListener(&s1);

	s.send("hello");
}
