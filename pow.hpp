#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include <cmath>

Class POW : public Base{
	private:
		Base* val1 = nullptr;
		Base* val2 = nullptr;

	public:
		POW(Base* val1, Base* val2):Base(){
			this -> val1 = val1;
			this -> val2 = val2;
		}

		virtual double evaluate(){
			return (pow(val1,val2));
		}

		virtual std::string stringify() {
	   		 return ("(" + val1->stringify() + "**" + val2->stringify() + ")"); 
		}
}

#endif
