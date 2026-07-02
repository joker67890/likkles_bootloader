/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Pierre Constantineau
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _LIKKLE_MFG_CUTZO_500_H
#define _LIKKLE_MFG_CUTZO_500_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER          2
#define LED_PRIMARY_PIN      PINNUM(0, 20)
#define LED_SECONDARY_PIN    PINNUM(0, 30)
#define LED_STATE_ON         1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTON_DFU     PINNUM(0, 18)
#define BUTTON_DFU_OTA PINNUM(0, 18)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLDOWN

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Likkle MFG"
#define BLEDIS_MODEL        "Cutzo 500"

//--------------------------------------------------------------------+
// USB PID from openmoko:
// PR https://github.com/openmoko/openmoko-usb-oui/pull/34
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x1d50
#define USB_DESC_UF2_PID      0x616f
#define USB_DESC_CDC_ONLY_PID 0x616f

#define ENABLE_DCDC_0 0
#define ENABLE_DCDC_1 0

#define UF2_PRODUCT_NAME      "Likkle MFG Cutzo 500"
#define UF2_VOLUME_LABEL      "CUTZO500"
#define UF2_BOARD_ID          "nRF52833-Likkle-MFG-Cutzo-500-v1"
#define UF2_INDEX_URL         "na"

#endif // _LIKKLE_MFG_CUTZO_500_H

