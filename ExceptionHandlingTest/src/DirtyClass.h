/*
 * DirtyClass.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef DIRTYCLASS_H_
#define DIRTYCLASS_H_

class DirtyClass {
public:
	DirtyClass();
	std::string* GetName();
	void ThrowException();
private:
	std::string *name;
};

#endif /* DIRTYCLASS_H_ */
