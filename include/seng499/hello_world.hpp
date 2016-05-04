/**
 *	\file
 */


#pragma once


#include <ostream>


namespace seng499 {
	
	
	/**
	 *	Writes hello world messages.
	 */
	class hello_world {
		
		
		public:
		
		
			/**
			 *	Outputs a hello world string to an output
			 *	stream.
			 *
			 *	\param [in] os
			 *		The stream to write to.
			 */
			static void print (std::ostream & os);
		
		
	};
	
	
}
