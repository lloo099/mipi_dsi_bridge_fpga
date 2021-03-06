/*******************************************************************************
  OSC Peripheral Library Template Implementation

  File Name:
    osc_PLLLockStatus_Default_1.h

  Summary:
    OSC PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : PLLLockStatus
    and its Variant : Default_1
    For following APIs :
        PLIB_OSC_ExistsPLLLockStatus
        PLIB_OSC_PLLIsLocked

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _OSC_PLLLOCKSTATUS_DEFAULT_1_H
#define _OSC_PLLLOCKSTATUS_DEFAULT_1_H

//******************************************************************************
/* Function :  OSC_ExistsPLLLockStatus_Default_1

  Summary:
    Implements Default_1 variant of PLIB_OSC_ExistsPLLLockStatus

  Description:
    This template implements the Default_1 variant of the PLIB_OSC_ExistsPLLLockStatus function.
*/

#define PLIB_OSC_ExistsPLLLockStatus PLIB_OSC_ExistsPLLLockStatus
PLIB_TEMPLATE bool OSC_ExistsPLLLockStatus_Default_1( OSC_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  OSC_PLLIsLocked_Default_1

  Summary:
    Implements Default_1 variant of PLIB_OSC_PLLIsLocked 

  Description:
    This template implements the Default_1 variant of the PLIB_OSC_PLLIsLocked function.
*/

PLIB_TEMPLATE bool OSC_PLLIsLocked_Default_1( OSC_MODULE_ID index , OSC_PLL_SELECT pllselect )
{
    bool returnValue;

    if (pllselect == OSC_PLL_USB)
    {
        returnValue = OSCCONbits.ULOCK;
    }
    else
    {
        returnValue = OSCCONbits.LOCK;
    }

    return returnValue;
}


#endif /*_OSC_PLLLOCKSTATUS_DEFAULT_1_H*/

/******************************************************************************
 End of File
*/

