/****************************************************************************
 * Copyright (C) 2014-2015 Haltian Ltd. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Dmitry Nikolaev <dmitry.nikolaev@haltian.com>
 *
 ****************************************************************************/

#ifndef OLED_INVERTER_H_
#define OLED_INVERTER_H_

/****************************************************************************
 * Name: oled_inverter_init
 *
 * Description:
 *  Initializes image module
 *
 * Input Parameters:
 *  hwnd - pointer to background window
 *
 * Returned Values:
 * 	Returns 0 on SUCCESS. -1 if ERROR occurred
 *
 ****************************************************************************/

void oled_inverter_init(NXWINDOW hwnd);

/****************************************************************************
 * Name: oled_invertor_do_invert
 *
 * Description:
 *  Inverts colors in user defined zone on the screen
 *
 * Input Parameters:
 *  pos_x  - x coordinate of the high left corner
 *  pos_y  - y coordinate of the high left corner
 *  width  - image width
 *  height - image height
 *
 * Returned Values:
 * 	Returns 0 on SUCCESS. -1 if ERROR occurred
 *
 ****************************************************************************/

int oled_invertor_do_invert(uint8_t pos_x, uint8_t pos_y, uint8_t width, uint8_t height);

#endif /* OLED_INVERTER_H_ */
