#ifndef __LINUX_CM36651_H
#define __CM36651_H__

#ifdef __KERNEL__
struct cm36651_platform_data {
	int (*cm36651_led_on) (bool);
	int irq;		/* proximity-sensor irq gpio */
};
#endif
#endif
