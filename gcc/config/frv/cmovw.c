/* Move word library function.
   Copyright (C) 2000, 2003 Free Software Foundation, Inc.
   Contributed by Red Hat, Inc.
  
   This file is part of GNU CC.
  
   GNU CC is free software ; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation * either version 2, or (at your option)
   any later version.
  
   GNU CC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY ; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with GNU CC; see the file COPYING.  If not, write to
   the Free Software Foundation, 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

void
__cmovw (int *dest, const int *src, unsigned len)
{
  unsigned i;
  unsigned num = len >> 2;
  unsigned xlen = len & ~3;
  char *dest_byte = (char *)dest;
  const char *src_byte = (const char *)src;

  if (dest_byte < src_byte || dest_byte > src_byte+len)
    {
      for (i = 0; i < num; i++)
	dest[i] = src[i];

      while (len > xlen)
	{
	  dest_byte[xlen] = src_byte[xlen];
	  xlen++;
	}
    }
  else
    {
      while (len-- > 0)
	dest_byte[len] = src_byte[len];
    }
}
