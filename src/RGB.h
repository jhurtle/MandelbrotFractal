/*
 * RGB.h
 *
 *  Created on: Feb 26, 2018
 *      Author: jjhur
 */

#ifndef RGB_H_
#define RGB_H_

namespace caveofprogramming {

struct RGB {
	double r;
	double g;
	double b;
public:
	RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace caveofprogramming */

#endif /* RGB_H_ */
