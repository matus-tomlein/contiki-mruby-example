CONTIKI_PROJECT = contiki-mruby-example
all: $(CONTIKI_PROJECT)

CFLAGS += -v

CONTIKIDIRS += mruby/include
TARGET_LIBFILES += mruby/build/host/lib/libmruby.a

CONTIKI = contiki
include $(CONTIKI)/Makefile.include
