# Copyright (c) 2016      Bryce Adelstein-Lelbach aka wash
# Copyright (c) 2000-2016 Paul Ullrich 
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying 
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

BUILD_TARGETS= nonhydro_sphere nonhydro_xz shallowwater_sphere
CLEAN_TARGETS= $(addsuffix .clean,$(BUILD_TARGETS))

.PHONY: all clean $(BUILD_TARGETS) $(CLEAN_TARGETS)

# Build rules.
all: $(BUILD_TARGETS)

$(BUILD_TARGETS): %:
	cd $*; $(MAKE)

# Clean rules.
clean: $(CLEAN_TARGETS)
        
$(CLEAN_TARGETS): %.clean:
	cd $*; $(MAKE) clean
