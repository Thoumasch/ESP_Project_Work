#include <sleep.h>
#include <zynq_registers.h>		// Defines hardware registers
int main(void)
{
	AXI_LED_TRI = ~0xF;		// Set direction for bits 0-3 to output for the LEDs
							// 0 means output, 1 means input
	while(1)
	{						// Loop forever
		AXI_LED_DATA = 0xF;	// Turn on (high) the LEDs
		sleep(1);			// Wait for 1s
		AXI_LED_DATA = 0x0;	// Turn off (low) the LEDs
		sleep(1);			// Wait again
	}
	return 0;
}
