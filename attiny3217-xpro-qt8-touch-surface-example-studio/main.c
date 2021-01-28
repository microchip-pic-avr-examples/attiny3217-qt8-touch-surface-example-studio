#include <atmel_start.h>
#include <led_driver.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

#if ENABLE_LED == 1u
	init_led_driver();
#endif

	/* Replace with your application code */
	while (1) {
		touch_process();
#if ENABLE_LED == 1u
		/* measurement done touch flag is not used.
		    measurement_done_touch is set only after all rebust is resolved.
		    There is a possibility that the surface staus is chaged before even measurement_done_touch flag is set.
		    Correct place to call these functions is qtm_post_process_complete().
		    Since in example project cannot modify touch.c these code is present here.
		    */
		led_decode_gesture();
		qtm_gestures_2d_clearGesture();
		led_process();
#endif
	}
}
