/*****************************************************************************
* Kernel / task handling private declarations.
*
* (c) Copyright 2006, Freescale, Inc. All rights reserved.
*
* No part of this document must be reproduced in any form - including copied,
* transcribed, printed or by any electronic means - without specific written
* permission from Freescale Semiconductor Denmark A/S.
*
*****************************************************************************/

#ifndef _TS_KERNEL_H_
#define _TS_KERNEL_H_

#include <stdint.h>

/* One bit per event. */
typedef uint32_t event_t;

/* boolean types */
typedef uint8_t   bool_t;
typedef uint8_t   booln_t;
/* used for indexing into an array in the most efficient manner for the platform */
typedef uint8_t   index_t;

#define TRUE 1
#define FALSE 0

#define IntDisable()  __disable_irq()
#define IntEnable()   __enable_irq()

/*****************************************************************************
******************************************************************************
* Private macros
******************************************************************************
*****************************************************************************/

/*****************************************************************************
******************************************************************************
* Private type definitions
******************************************************************************
*****************************************************************************/

/*****************************************************************************
******************************************************************************
* Private Prototypes
******************************************************************************
*****************************************************************************/

/*****************************************************************************
******************************************************************************
* Public memory declarations
******************************************************************************
*****************************************************************************/

/*****************************************************************************
******************************************************************************
* Public Prototypes
******************************************************************************
*****************************************************************************/

#endif                                  /* #ifndef _TS_KERNEL_H_ */