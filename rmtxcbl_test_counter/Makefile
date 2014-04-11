B := bin
T := all optmon test_optmon help clean

default: all

config:
	(mkdir -p ${B} && cd ${B} && cmake -DCMAKE_BUILD_TYPE=Release ..)

config_debug:
	(mkdir -p ${B} && cd ${B} && cmake -DCMAKE_BUILD_TYPE=Debug ..)


clean_all: clean_bin

clean_bin:
	rm -rf ${B}

$(T): config
	(cd ${B} && make $@)

