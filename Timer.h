#pragma once
#include <iostream>
#include <chrono>

/* How to use
* 시간측정 시작 위치에 생성자 클래스 생성 Timer timer;
* 시간측정 종료 위치에 timer.elapsed(); 호출
*/

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;
	
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed();
};

