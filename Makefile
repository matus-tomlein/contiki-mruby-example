CONTIKI_PROJECT = contiki-mruby-example
all: $(CONTIKI_PROJECT)

CONTIKIDIRS += mruby/include

CFLAGS += -v
CFLAGS += -Imruby/include

CONTIKI = contiki
include $(CONTIKI)/Makefile.include
