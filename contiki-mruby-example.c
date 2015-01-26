#include "contiki.h"

#include <stdio.h> /* For printf() */
#include "mruby.h"
#include "mruby/compile.h"

/*---------------------------------------------------------------------------*/
PROCESS(mruby_process, "MRuby process");
AUTOSTART_PROCESSES(&mruby_process);
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(mruby_process, ev, data)
{
  PROCESS_BEGIN();

  /* make a mruby instance */
  mrb_state *mrb = mrb_open();

  /* write some code */
  char code[] = "p 'Hello world!'";

  /* use it to execute code from string */
  mrb_load_string(mrb, code);
  
  PROCESS_END();
}
/*---------------------------------------------------------------------------*/

