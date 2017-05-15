#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "DigiPot.h"

#define START_TIMER_RTI SRTISC = 0b00000110 //Start counting to 512 ms
#define TIMER_RTI_NOT_FINISHED SRTISC_RTIF==0 //Timer finish indicator flag is off
#define TIMER_RTI_RESET_FLAG SRTISC_RTIACK = 1 //Turning timer finish indicator flag off again
#define STOP_TIMER_RTI SRTISC=0b00000000 //Stop timer


//Function that uses the SRTISC register to count for 512 ms and then stop 
void timer_half_a_second(void)
{
	
   /* Configuring intern clock register settings to use the MC without the development kit */
   ICSTRM=NVICSTRM;		
   ICSSC_FTRIM=NVFTRIM;
	
   START_TIMER_RTI; 
   do
   {
      __RESET_WATCHDOG();
		
   }while(TIMER_RTI_NOT_FINISHED);
	
   TIMER_RTI_RESET_FLAG;
   STOP_TIMER_RTI; 
}


bool set;

void main(void) {
  EnableInterrupts;
  /* include your code here */
  set=FALSE;
  DigiPot_Init();
  set=DigiPot_setResistance(RAW,70000);

  

  for(;;) {
	
	

    __RESET_WATCHDOG();	/* feeds the dog */
	
  } /* loop forever */
  /* please make sure that you never leave main */
}
