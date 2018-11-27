#include "clock.h"

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const
{
	return seconds / 3600 % 24;
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const
{
	return seconds / 60 % 60;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const
{
	return seconds % 60;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const
{
	std::string timedisplay = std::to_string(get_hours()) + "\t" +  std::to_string(get_minutes()) + "\t" +  std::to_string(get_seconds());

	return timedisplay;
}

void Clock::update_time()
{
	seconds += 1;
}
