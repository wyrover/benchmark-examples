
#include <bench/bench.h>

#include <Windows.h>

void Hello1()
{
	int i = 0;
	for (i = 0; i < 100; i++) {
		//printf("hello1");
		::Sleep(5);
	}
}

void Hello2()
{
	int i = 0;
	for (i = 0; i < 300; i++) {
		//printf("hello1");
		::Sleep(5);
	}
}


static void Hello1_Bench(benchmark::State& state)
{
    
    while (state.KeepRunning()) {
		Hello1();
    }
}

static void Hello2_Bench(benchmark::State& state)
{

	while (state.KeepRunning()) {
		Hello2();
	}
}




BENCHMARK(Hello1_Bench);
BENCHMARK(Hello2_Bench);

