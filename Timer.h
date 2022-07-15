#pragma once
#include <iostream>
#include <chrono>

/* How to use
* �ð����� ���� ��ġ�� ������ Ŭ���� ���� Timer timer;
* �ð����� ���� ��ġ�� timer.elapsed(); ȣ��
*/

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;
	
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed();
};

