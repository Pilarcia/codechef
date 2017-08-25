# gtest are used for google test  -lgtest -lgtest_main -lpthread
CXXFLAGS= -g -Wall -Wextra 

CXXFILES:=rainbowarray.cc elevatorstairs.cc
TARGETS:=rainbowarray elevatorstairs
OBJECTS :=$(patsubst %.cc, %.o, $(CXXFILES))

all: $(TARGETS)

%.o: %.cc
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -c -o $@ $<

rainbowarray: rainbowarray.o
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -o $@ $^

elevatorstairs: elevatorstairs.o
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -o $@ $^

install: $(TARGETS)
	mkdir -p $(DESTDIR)/$(PREFIX)/bin
	$(INSTALL) -m 0755 $(TARGETS) $(DESTDIR)/$(PREFIX)/bin/

uninstall:
	rm -f $(DESTDIR)/$(PREFIX)/bin/$(TARGETS)


clean:
	$(RM) -- $(OBJECTS)
	$(RM) -- $(TARGETS)

.PHONY: all clean uninstall install

#
# Dependecies
#
rainbowarray.o: rainbowarray.cc
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -c -o $@ $<

elevatorstairs.o: elevatorstairs.cc
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -c -o $@ $<


