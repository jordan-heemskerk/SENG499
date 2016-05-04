#include <seng499/hello_world.hpp>


#include <sstream>
#include <catch.hpp>


SCENARIO("hello_world may be used to obtain a hello world message","[seng499][hello_world]") {
	
	GIVEN("An output stream") {
		
		std::ostringstream ss;
		
		WHEN("hello_world::print is invoked with that stream as its argument") {
			
			seng499::hello_world::print(ss);
			
			THEN("\"Hello, world!\" is written to the stream") {
				
				CHECK(ss.str()=="Hello, world!");
				
			}
			
		}
		
	}
	
}
