# gtest are used for google test  -lgtest -lgtest_main -lpthread
CXXFLAGS= -g -Wall -Wextra 

CXXFILES:=rainbowarray.cc
TARGETS:=rainbowarray
OBJECTS :=$(patsubst %.cc, %.o, $(CXXFILES))

all: $(TARGETS)

%.o: %.cc
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -c -o $@ $<

rainbowarray: $(OBJECTS) 
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
rainbowarray.o: $(CXXFILES)  
	$(CROSS_ENV) $(CROSS_COMPILE)$(CXX) $(L_CXXFLAGS) $(CXXFLAGS) -c -o $@ $<


