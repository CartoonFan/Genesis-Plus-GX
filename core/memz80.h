/***************************************************************************************
 *  Genesis Plus
 *  Z80 bus handlers (Genesis & Master System modes)
 *
 *  Support for SG-1000, Mark-III, Master System, Game Gear & Mega Drive ports access
 *
 *  Copyright (C) 1998-2003  Charles Mac Donald (original code)
 *  Copyright (C) 2007-2025  Eke-Eke (Genesis Plus GX)
 *
 *  Redistribution and use of this code or any derivative works are permitted
 *  provided that the following conditions are met:
 *
 *   - Redistributions may not be sold, nor may they be used in a commercial
 *     product or activity.
 *
 *   - Redistributions that are modified from the original source must include the
 *     complete source code, including the source code for all components used by a
 *     binary built from the modified sources. However, as a special exception, the
 *     source code distributed need not include anything that is normally distributed
 *     (in either source or binary form) with the major components (compiler, kernel,
 *     and so on) of the operating system on which the executable runs, unless that
 *     component itself accompanies the executable.
 *
 *   - Redistributions must reproduce the above copyright notice, this list of
 *     conditions and the following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************************/

#ifndef _MEMZ80_H_
#define _MEMZ80_H_

extern unsigned char z80_memory_r(unsigned int address);
extern void z80_memory_w(unsigned int address, unsigned char data);
extern unsigned char z80_unused_port_r(unsigned int port);
extern void z80_unused_port_w(unsigned int port, unsigned char data);
extern unsigned char z80_md_port_r(unsigned int port);
extern void z80_md_port_w(unsigned int port, unsigned char data);
extern unsigned char z80_gg_port_r(unsigned int port);
extern void z80_gg_port_w(unsigned int port, unsigned char data);
extern unsigned char z80_ms_port_r(unsigned int port);
extern void z80_ms_port_w(unsigned int port, unsigned char data);
extern unsigned char z80_m3_port_r(unsigned int port);
extern void z80_m3_port_w(unsigned int port, unsigned char data);
extern unsigned char z80_sg_port_r(unsigned int port);
extern void z80_sg_port_w(unsigned int port, unsigned char data);

#endif /* _MEMZ80_H_ */
