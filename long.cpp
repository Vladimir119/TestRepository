int main() {
	long long a = 0;
	for(long long i = 0; i < 10'000'000'000; ++i){
	       	++a;
		--a;
		++a;
	}
	return 0;
}
