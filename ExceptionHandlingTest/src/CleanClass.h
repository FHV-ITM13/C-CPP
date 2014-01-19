/*
 * CleanClass.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef CLEANCLASS_H_
#define CLEANCLASS_H_
#include <string>

class CleanClass {
public:
	CleanClass();
	~CleanClass();
	std::string* GetName();
	void ThrowException();
private:
	std::string *name;
};



#endif /* CLEANCLASS_H_ */
