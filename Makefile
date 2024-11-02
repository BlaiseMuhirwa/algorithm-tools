CPP_FILES := $(wildcard src/**/*.h src/**/*.cc)

format-cpp:
	clang-format -i $(CPP_FILES)