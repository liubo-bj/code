// =====================================================================================
// 
//       Filename:  def.h $Id$:
// 
//    Description:  
// 
//        Created:  11/20/2012 06:28:49 PM CST
//       Revision:  $Rev$:
//       Compiler:  g++
// 
//         Author:  liubo (lb), lb.falcons@gmail.com ($Author$:)
//        Company:  funshion
// 
// =====================================================================================

#ifndef DEF_H
#define DEF_H 

#define likely(x) __builtin_expect((x),1)
#define unlikely(x)  __builtin_expect(!!(x), 0)

#endif /* DEF_H */
