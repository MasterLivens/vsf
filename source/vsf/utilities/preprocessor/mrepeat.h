/*****************************************************************************
 *   Copyright(C)2009-2019 by VSF Team                                       *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *     http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 ****************************************************************************/

#ifndef _REPEAT_MACRO_H_
#define _REPEAT_MACRO_H_

#include "preprocessor.h"


//! Maximal number of repetitions supported by REPEAT_MACRO.
#define REPEAT_MACRO_LIMIT   256

/*! \brief Macro repeat.
 *
 * This macro represents a horizontal repetition construct.
 *
 * \param count  The number of repetitious calls to macro. Valid values range from 0 to REPEAT_MACRO_LIMIT.
 * \param macro  A binary operation of the form macro(n, data). This macro is expanded by REPEAT_MACRO with
 *               the current repetition number and the auxiliary data argument.
 * \param data   Auxiliary data passed to macro.
 *
 * \return       <tt>macro(0, data) macro(1, data) ... macro(count - 1, data)</tt>
 */
#define REPEAT_MACRO(count, macro, data)         TPASTE2(REPEAT_MACRO, count)(macro, data)

#define REPEAT_MACRO0(  macro, data)
#define REPEAT_MACRO1(  macro, data)       REPEAT_MACRO0(  macro, data)   macro(  0, data)
#define REPEAT_MACRO2(  macro, data)       REPEAT_MACRO1(  macro, data)   macro(  1, data)
#define REPEAT_MACRO3(  macro, data)       REPEAT_MACRO2(  macro, data)   macro(  2, data)
#define REPEAT_MACRO4(  macro, data)       REPEAT_MACRO3(  macro, data)   macro(  3, data)
#define REPEAT_MACRO5(  macro, data)       REPEAT_MACRO4(  macro, data)   macro(  4, data)
#define REPEAT_MACRO6(  macro, data)       REPEAT_MACRO5(  macro, data)   macro(  5, data)
#define REPEAT_MACRO7(  macro, data)       REPEAT_MACRO6(  macro, data)   macro(  6, data)
#define REPEAT_MACRO8(  macro, data)       REPEAT_MACRO7(  macro, data)   macro(  7, data)
#define REPEAT_MACRO9(  macro, data)       REPEAT_MACRO8(  macro, data)   macro(  8, data)
#define REPEAT_MACRO10( macro, data)       REPEAT_MACRO9(  macro, data)   macro(  9, data)
#define REPEAT_MACRO11( macro, data)       REPEAT_MACRO10( macro, data)   macro( 10, data)
#define REPEAT_MACRO12( macro, data)       REPEAT_MACRO11( macro, data)   macro( 11, data)
#define REPEAT_MACRO13( macro, data)       REPEAT_MACRO12( macro, data)   macro( 12, data)
#define REPEAT_MACRO14( macro, data)       REPEAT_MACRO13( macro, data)   macro( 13, data)
#define REPEAT_MACRO15( macro, data)       REPEAT_MACRO14( macro, data)   macro( 14, data)
#define REPEAT_MACRO16( macro, data)       REPEAT_MACRO15( macro, data)   macro( 15, data)
#define REPEAT_MACRO17( macro, data)       REPEAT_MACRO16( macro, data)   macro( 16, data)
#define REPEAT_MACRO18( macro, data)       REPEAT_MACRO17( macro, data)   macro( 17, data)
#define REPEAT_MACRO19( macro, data)       REPEAT_MACRO18( macro, data)   macro( 18, data)
#define REPEAT_MACRO20( macro, data)       REPEAT_MACRO19( macro, data)   macro( 19, data)
#define REPEAT_MACRO21( macro, data)       REPEAT_MACRO20( macro, data)   macro( 20, data)
#define REPEAT_MACRO22( macro, data)       REPEAT_MACRO21( macro, data)   macro( 21, data)
#define REPEAT_MACRO23( macro, data)       REPEAT_MACRO22( macro, data)   macro( 22, data)
#define REPEAT_MACRO24( macro, data)       REPEAT_MACRO23( macro, data)   macro( 23, data)
#define REPEAT_MACRO25( macro, data)       REPEAT_MACRO24( macro, data)   macro( 24, data)
#define REPEAT_MACRO26( macro, data)       REPEAT_MACRO25( macro, data)   macro( 25, data)
#define REPEAT_MACRO27( macro, data)       REPEAT_MACRO26( macro, data)   macro( 26, data)
#define REPEAT_MACRO28( macro, data)       REPEAT_MACRO27( macro, data)   macro( 27, data)
#define REPEAT_MACRO29( macro, data)       REPEAT_MACRO28( macro, data)   macro( 28, data)
#define REPEAT_MACRO30( macro, data)       REPEAT_MACRO29( macro, data)   macro( 29, data)
#define REPEAT_MACRO31( macro, data)       REPEAT_MACRO30( macro, data)   macro( 30, data)
#define REPEAT_MACRO32( macro, data)       REPEAT_MACRO31( macro, data)   macro( 31, data)
#define REPEAT_MACRO33( macro, data)       REPEAT_MACRO32( macro, data)   macro( 32, data)
#define REPEAT_MACRO34( macro, data)       REPEAT_MACRO33( macro, data)   macro( 33, data)
#define REPEAT_MACRO35( macro, data)       REPEAT_MACRO34( macro, data)   macro( 34, data)
#define REPEAT_MACRO36( macro, data)       REPEAT_MACRO35( macro, data)   macro( 35, data)
#define REPEAT_MACRO37( macro, data)       REPEAT_MACRO36( macro, data)   macro( 36, data)
#define REPEAT_MACRO38( macro, data)       REPEAT_MACRO37( macro, data)   macro( 37, data)
#define REPEAT_MACRO39( macro, data)       REPEAT_MACRO38( macro, data)   macro( 38, data)
#define REPEAT_MACRO40( macro, data)       REPEAT_MACRO39( macro, data)   macro( 39, data)
#define REPEAT_MACRO41( macro, data)       REPEAT_MACRO40( macro, data)   macro( 40, data)
#define REPEAT_MACRO42( macro, data)       REPEAT_MACRO41( macro, data)   macro( 41, data)
#define REPEAT_MACRO43( macro, data)       REPEAT_MACRO42( macro, data)   macro( 42, data)
#define REPEAT_MACRO44( macro, data)       REPEAT_MACRO43( macro, data)   macro( 43, data)
#define REPEAT_MACRO45( macro, data)       REPEAT_MACRO44( macro, data)   macro( 44, data)
#define REPEAT_MACRO46( macro, data)       REPEAT_MACRO45( macro, data)   macro( 45, data)
#define REPEAT_MACRO47( macro, data)       REPEAT_MACRO46( macro, data)   macro( 46, data)
#define REPEAT_MACRO48( macro, data)       REPEAT_MACRO47( macro, data)   macro( 47, data)
#define REPEAT_MACRO49( macro, data)       REPEAT_MACRO48( macro, data)   macro( 48, data)
#define REPEAT_MACRO50( macro, data)       REPEAT_MACRO49( macro, data)   macro( 49, data)
#define REPEAT_MACRO51( macro, data)       REPEAT_MACRO50( macro, data)   macro( 50, data)
#define REPEAT_MACRO52( macro, data)       REPEAT_MACRO51( macro, data)   macro( 51, data)
#define REPEAT_MACRO53( macro, data)       REPEAT_MACRO52( macro, data)   macro( 52, data)
#define REPEAT_MACRO54( macro, data)       REPEAT_MACRO53( macro, data)   macro( 53, data)
#define REPEAT_MACRO55( macro, data)       REPEAT_MACRO54( macro, data)   macro( 54, data)
#define REPEAT_MACRO56( macro, data)       REPEAT_MACRO55( macro, data)   macro( 55, data)
#define REPEAT_MACRO57( macro, data)       REPEAT_MACRO56( macro, data)   macro( 56, data)
#define REPEAT_MACRO58( macro, data)       REPEAT_MACRO57( macro, data)   macro( 57, data)
#define REPEAT_MACRO59( macro, data)       REPEAT_MACRO58( macro, data)   macro( 58, data)
#define REPEAT_MACRO60( macro, data)       REPEAT_MACRO59( macro, data)   macro( 59, data)
#define REPEAT_MACRO61( macro, data)       REPEAT_MACRO60( macro, data)   macro( 60, data)
#define REPEAT_MACRO62( macro, data)       REPEAT_MACRO61( macro, data)   macro( 61, data)
#define REPEAT_MACRO63( macro, data)       REPEAT_MACRO62( macro, data)   macro( 62, data)
#define REPEAT_MACRO64( macro, data)       REPEAT_MACRO63( macro, data)   macro( 63, data)
#define REPEAT_MACRO65( macro, data)       REPEAT_MACRO64( macro, data)   macro( 64, data)
#define REPEAT_MACRO66( macro, data)       REPEAT_MACRO65( macro, data)   macro( 65, data)
#define REPEAT_MACRO67( macro, data)       REPEAT_MACRO66( macro, data)   macro( 66, data)
#define REPEAT_MACRO68( macro, data)       REPEAT_MACRO67( macro, data)   macro( 67, data)
#define REPEAT_MACRO69( macro, data)       REPEAT_MACRO68( macro, data)   macro( 68, data)
#define REPEAT_MACRO70( macro, data)       REPEAT_MACRO69( macro, data)   macro( 69, data)
#define REPEAT_MACRO71( macro, data)       REPEAT_MACRO70( macro, data)   macro( 70, data)
#define REPEAT_MACRO72( macro, data)       REPEAT_MACRO71( macro, data)   macro( 71, data)
#define REPEAT_MACRO73( macro, data)       REPEAT_MACRO72( macro, data)   macro( 72, data)
#define REPEAT_MACRO74( macro, data)       REPEAT_MACRO73( macro, data)   macro( 73, data)
#define REPEAT_MACRO75( macro, data)       REPEAT_MACRO74( macro, data)   macro( 74, data)
#define REPEAT_MACRO76( macro, data)       REPEAT_MACRO75( macro, data)   macro( 75, data)
#define REPEAT_MACRO77( macro, data)       REPEAT_MACRO76( macro, data)   macro( 76, data)
#define REPEAT_MACRO78( macro, data)       REPEAT_MACRO77( macro, data)   macro( 77, data)
#define REPEAT_MACRO79( macro, data)       REPEAT_MACRO78( macro, data)   macro( 78, data)
#define REPEAT_MACRO80( macro, data)       REPEAT_MACRO79( macro, data)   macro( 79, data)
#define REPEAT_MACRO81( macro, data)       REPEAT_MACRO80( macro, data)   macro( 80, data)
#define REPEAT_MACRO82( macro, data)       REPEAT_MACRO81( macro, data)   macro( 81, data)
#define REPEAT_MACRO83( macro, data)       REPEAT_MACRO82( macro, data)   macro( 82, data)
#define REPEAT_MACRO84( macro, data)       REPEAT_MACRO83( macro, data)   macro( 83, data)
#define REPEAT_MACRO85( macro, data)       REPEAT_MACRO84( macro, data)   macro( 84, data)
#define REPEAT_MACRO86( macro, data)       REPEAT_MACRO85( macro, data)   macro( 85, data)
#define REPEAT_MACRO87( macro, data)       REPEAT_MACRO86( macro, data)   macro( 86, data)
#define REPEAT_MACRO88( macro, data)       REPEAT_MACRO87( macro, data)   macro( 87, data)
#define REPEAT_MACRO89( macro, data)       REPEAT_MACRO88( macro, data)   macro( 88, data)
#define REPEAT_MACRO90( macro, data)       REPEAT_MACRO89( macro, data)   macro( 89, data)
#define REPEAT_MACRO91( macro, data)       REPEAT_MACRO90( macro, data)   macro( 90, data)
#define REPEAT_MACRO92( macro, data)       REPEAT_MACRO91( macro, data)   macro( 91, data)
#define REPEAT_MACRO93( macro, data)       REPEAT_MACRO92( macro, data)   macro( 92, data)
#define REPEAT_MACRO94( macro, data)       REPEAT_MACRO93( macro, data)   macro( 93, data)
#define REPEAT_MACRO95( macro, data)       REPEAT_MACRO94( macro, data)   macro( 94, data)
#define REPEAT_MACRO96( macro, data)       REPEAT_MACRO95( macro, data)   macro( 95, data)
#define REPEAT_MACRO97( macro, data)       REPEAT_MACRO96( macro, data)   macro( 96, data)
#define REPEAT_MACRO98( macro, data)       REPEAT_MACRO97( macro, data)   macro( 97, data)
#define REPEAT_MACRO99( macro, data)       REPEAT_MACRO98( macro, data)   macro( 98, data)
#define REPEAT_MACRO100(macro, data)       REPEAT_MACRO99( macro, data)   macro( 99, data)
#define REPEAT_MACRO101(macro, data)       REPEAT_MACRO100(macro, data)   macro(100, data)
#define REPEAT_MACRO102(macro, data)       REPEAT_MACRO101(macro, data)   macro(101, data)
#define REPEAT_MACRO103(macro, data)       REPEAT_MACRO102(macro, data)   macro(102, data)
#define REPEAT_MACRO104(macro, data)       REPEAT_MACRO103(macro, data)   macro(103, data)
#define REPEAT_MACRO105(macro, data)       REPEAT_MACRO104(macro, data)   macro(104, data)
#define REPEAT_MACRO106(macro, data)       REPEAT_MACRO105(macro, data)   macro(105, data)
#define REPEAT_MACRO107(macro, data)       REPEAT_MACRO106(macro, data)   macro(106, data)
#define REPEAT_MACRO108(macro, data)       REPEAT_MACRO107(macro, data)   macro(107, data)
#define REPEAT_MACRO109(macro, data)       REPEAT_MACRO108(macro, data)   macro(108, data)
#define REPEAT_MACRO110(macro, data)       REPEAT_MACRO109(macro, data)   macro(109, data)
#define REPEAT_MACRO111(macro, data)       REPEAT_MACRO110(macro, data)   macro(110, data)
#define REPEAT_MACRO112(macro, data)       REPEAT_MACRO111(macro, data)   macro(111, data)
#define REPEAT_MACRO113(macro, data)       REPEAT_MACRO112(macro, data)   macro(112, data)
#define REPEAT_MACRO114(macro, data)       REPEAT_MACRO113(macro, data)   macro(113, data)
#define REPEAT_MACRO115(macro, data)       REPEAT_MACRO114(macro, data)   macro(114, data)
#define REPEAT_MACRO116(macro, data)       REPEAT_MACRO115(macro, data)   macro(115, data)
#define REPEAT_MACRO117(macro, data)       REPEAT_MACRO116(macro, data)   macro(116, data)
#define REPEAT_MACRO118(macro, data)       REPEAT_MACRO117(macro, data)   macro(117, data)
#define REPEAT_MACRO119(macro, data)       REPEAT_MACRO118(macro, data)   macro(118, data)
#define REPEAT_MACRO120(macro, data)       REPEAT_MACRO119(macro, data)   macro(119, data)
#define REPEAT_MACRO121(macro, data)       REPEAT_MACRO120(macro, data)   macro(120, data)
#define REPEAT_MACRO122(macro, data)       REPEAT_MACRO121(macro, data)   macro(121, data)
#define REPEAT_MACRO123(macro, data)       REPEAT_MACRO122(macro, data)   macro(122, data)
#define REPEAT_MACRO124(macro, data)       REPEAT_MACRO123(macro, data)   macro(123, data)
#define REPEAT_MACRO125(macro, data)       REPEAT_MACRO124(macro, data)   macro(124, data)
#define REPEAT_MACRO126(macro, data)       REPEAT_MACRO125(macro, data)   macro(125, data)
#define REPEAT_MACRO127(macro, data)       REPEAT_MACRO126(macro, data)   macro(126, data)
#define REPEAT_MACRO128(macro, data)       REPEAT_MACRO127(macro, data)   macro(127, data)
#define REPEAT_MACRO129(macro, data)       REPEAT_MACRO128(macro, data)   macro(128, data)
#define REPEAT_MACRO130(macro, data)       REPEAT_MACRO129(macro, data)   macro(129, data)
#define REPEAT_MACRO131(macro, data)       REPEAT_MACRO130(macro, data)   macro(130, data)
#define REPEAT_MACRO132(macro, data)       REPEAT_MACRO131(macro, data)   macro(131, data)
#define REPEAT_MACRO133(macro, data)       REPEAT_MACRO132(macro, data)   macro(132, data)
#define REPEAT_MACRO134(macro, data)       REPEAT_MACRO133(macro, data)   macro(133, data)
#define REPEAT_MACRO135(macro, data)       REPEAT_MACRO134(macro, data)   macro(134, data)
#define REPEAT_MACRO136(macro, data)       REPEAT_MACRO135(macro, data)   macro(135, data)
#define REPEAT_MACRO137(macro, data)       REPEAT_MACRO136(macro, data)   macro(136, data)
#define REPEAT_MACRO138(macro, data)       REPEAT_MACRO137(macro, data)   macro(137, data)
#define REPEAT_MACRO139(macro, data)       REPEAT_MACRO138(macro, data)   macro(138, data)
#define REPEAT_MACRO140(macro, data)       REPEAT_MACRO139(macro, data)   macro(139, data)
#define REPEAT_MACRO141(macro, data)       REPEAT_MACRO140(macro, data)   macro(140, data)
#define REPEAT_MACRO142(macro, data)       REPEAT_MACRO141(macro, data)   macro(141, data)
#define REPEAT_MACRO143(macro, data)       REPEAT_MACRO142(macro, data)   macro(142, data)
#define REPEAT_MACRO144(macro, data)       REPEAT_MACRO143(macro, data)   macro(143, data)
#define REPEAT_MACRO145(macro, data)       REPEAT_MACRO144(macro, data)   macro(144, data)
#define REPEAT_MACRO146(macro, data)       REPEAT_MACRO145(macro, data)   macro(145, data)
#define REPEAT_MACRO147(macro, data)       REPEAT_MACRO146(macro, data)   macro(146, data)
#define REPEAT_MACRO148(macro, data)       REPEAT_MACRO147(macro, data)   macro(147, data)
#define REPEAT_MACRO149(macro, data)       REPEAT_MACRO148(macro, data)   macro(148, data)
#define REPEAT_MACRO150(macro, data)       REPEAT_MACRO149(macro, data)   macro(149, data)
#define REPEAT_MACRO151(macro, data)       REPEAT_MACRO150(macro, data)   macro(150, data)
#define REPEAT_MACRO152(macro, data)       REPEAT_MACRO151(macro, data)   macro(151, data)
#define REPEAT_MACRO153(macro, data)       REPEAT_MACRO152(macro, data)   macro(152, data)
#define REPEAT_MACRO154(macro, data)       REPEAT_MACRO153(macro, data)   macro(153, data)
#define REPEAT_MACRO155(macro, data)       REPEAT_MACRO154(macro, data)   macro(154, data)
#define REPEAT_MACRO156(macro, data)       REPEAT_MACRO155(macro, data)   macro(155, data)
#define REPEAT_MACRO157(macro, data)       REPEAT_MACRO156(macro, data)   macro(156, data)
#define REPEAT_MACRO158(macro, data)       REPEAT_MACRO157(macro, data)   macro(157, data)
#define REPEAT_MACRO159(macro, data)       REPEAT_MACRO158(macro, data)   macro(158, data)
#define REPEAT_MACRO160(macro, data)       REPEAT_MACRO159(macro, data)   macro(159, data)
#define REPEAT_MACRO161(macro, data)       REPEAT_MACRO160(macro, data)   macro(160, data)
#define REPEAT_MACRO162(macro, data)       REPEAT_MACRO161(macro, data)   macro(161, data)
#define REPEAT_MACRO163(macro, data)       REPEAT_MACRO162(macro, data)   macro(162, data)
#define REPEAT_MACRO164(macro, data)       REPEAT_MACRO163(macro, data)   macro(163, data)
#define REPEAT_MACRO165(macro, data)       REPEAT_MACRO164(macro, data)   macro(164, data)
#define REPEAT_MACRO166(macro, data)       REPEAT_MACRO165(macro, data)   macro(165, data)
#define REPEAT_MACRO167(macro, data)       REPEAT_MACRO166(macro, data)   macro(166, data)
#define REPEAT_MACRO168(macro, data)       REPEAT_MACRO167(macro, data)   macro(167, data)
#define REPEAT_MACRO169(macro, data)       REPEAT_MACRO168(macro, data)   macro(168, data)
#define REPEAT_MACRO170(macro, data)       REPEAT_MACRO169(macro, data)   macro(169, data)
#define REPEAT_MACRO171(macro, data)       REPEAT_MACRO170(macro, data)   macro(170, data)
#define REPEAT_MACRO172(macro, data)       REPEAT_MACRO171(macro, data)   macro(171, data)
#define REPEAT_MACRO173(macro, data)       REPEAT_MACRO172(macro, data)   macro(172, data)
#define REPEAT_MACRO174(macro, data)       REPEAT_MACRO173(macro, data)   macro(173, data)
#define REPEAT_MACRO175(macro, data)       REPEAT_MACRO174(macro, data)   macro(174, data)
#define REPEAT_MACRO176(macro, data)       REPEAT_MACRO175(macro, data)   macro(175, data)
#define REPEAT_MACRO177(macro, data)       REPEAT_MACRO176(macro, data)   macro(176, data)
#define REPEAT_MACRO178(macro, data)       REPEAT_MACRO177(macro, data)   macro(177, data)
#define REPEAT_MACRO179(macro, data)       REPEAT_MACRO178(macro, data)   macro(178, data)
#define REPEAT_MACRO180(macro, data)       REPEAT_MACRO179(macro, data)   macro(179, data)
#define REPEAT_MACRO181(macro, data)       REPEAT_MACRO180(macro, data)   macro(180, data)
#define REPEAT_MACRO182(macro, data)       REPEAT_MACRO181(macro, data)   macro(181, data)
#define REPEAT_MACRO183(macro, data)       REPEAT_MACRO182(macro, data)   macro(182, data)
#define REPEAT_MACRO184(macro, data)       REPEAT_MACRO183(macro, data)   macro(183, data)
#define REPEAT_MACRO185(macro, data)       REPEAT_MACRO184(macro, data)   macro(184, data)
#define REPEAT_MACRO186(macro, data)       REPEAT_MACRO185(macro, data)   macro(185, data)
#define REPEAT_MACRO187(macro, data)       REPEAT_MACRO186(macro, data)   macro(186, data)
#define REPEAT_MACRO188(macro, data)       REPEAT_MACRO187(macro, data)   macro(187, data)
#define REPEAT_MACRO189(macro, data)       REPEAT_MACRO188(macro, data)   macro(188, data)
#define REPEAT_MACRO190(macro, data)       REPEAT_MACRO189(macro, data)   macro(189, data)
#define REPEAT_MACRO191(macro, data)       REPEAT_MACRO190(macro, data)   macro(190, data)
#define REPEAT_MACRO192(macro, data)       REPEAT_MACRO191(macro, data)   macro(191, data)
#define REPEAT_MACRO193(macro, data)       REPEAT_MACRO192(macro, data)   macro(192, data)
#define REPEAT_MACRO194(macro, data)       REPEAT_MACRO193(macro, data)   macro(193, data)
#define REPEAT_MACRO195(macro, data)       REPEAT_MACRO194(macro, data)   macro(194, data)
#define REPEAT_MACRO196(macro, data)       REPEAT_MACRO195(macro, data)   macro(195, data)
#define REPEAT_MACRO197(macro, data)       REPEAT_MACRO196(macro, data)   macro(196, data)
#define REPEAT_MACRO198(macro, data)       REPEAT_MACRO197(macro, data)   macro(197, data)
#define REPEAT_MACRO199(macro, data)       REPEAT_MACRO198(macro, data)   macro(198, data)
#define REPEAT_MACRO200(macro, data)       REPEAT_MACRO199(macro, data)   macro(199, data)
#define REPEAT_MACRO201(macro, data)       REPEAT_MACRO200(macro, data)   macro(200, data)
#define REPEAT_MACRO202(macro, data)       REPEAT_MACRO201(macro, data)   macro(201, data)
#define REPEAT_MACRO203(macro, data)       REPEAT_MACRO202(macro, data)   macro(202, data)
#define REPEAT_MACRO204(macro, data)       REPEAT_MACRO203(macro, data)   macro(203, data)
#define REPEAT_MACRO205(macro, data)       REPEAT_MACRO204(macro, data)   macro(204, data)
#define REPEAT_MACRO206(macro, data)       REPEAT_MACRO205(macro, data)   macro(205, data)
#define REPEAT_MACRO207(macro, data)       REPEAT_MACRO206(macro, data)   macro(206, data)
#define REPEAT_MACRO208(macro, data)       REPEAT_MACRO207(macro, data)   macro(207, data)
#define REPEAT_MACRO209(macro, data)       REPEAT_MACRO208(macro, data)   macro(208, data)
#define REPEAT_MACRO210(macro, data)       REPEAT_MACRO209(macro, data)   macro(209, data)
#define REPEAT_MACRO211(macro, data)       REPEAT_MACRO210(macro, data)   macro(210, data)
#define REPEAT_MACRO212(macro, data)       REPEAT_MACRO211(macro, data)   macro(211, data)
#define REPEAT_MACRO213(macro, data)       REPEAT_MACRO212(macro, data)   macro(212, data)
#define REPEAT_MACRO214(macro, data)       REPEAT_MACRO213(macro, data)   macro(213, data)
#define REPEAT_MACRO215(macro, data)       REPEAT_MACRO214(macro, data)   macro(214, data)
#define REPEAT_MACRO216(macro, data)       REPEAT_MACRO215(macro, data)   macro(215, data)
#define REPEAT_MACRO217(macro, data)       REPEAT_MACRO216(macro, data)   macro(216, data)
#define REPEAT_MACRO218(macro, data)       REPEAT_MACRO217(macro, data)   macro(217, data)
#define REPEAT_MACRO219(macro, data)       REPEAT_MACRO218(macro, data)   macro(218, data)
#define REPEAT_MACRO220(macro, data)       REPEAT_MACRO219(macro, data)   macro(219, data)
#define REPEAT_MACRO221(macro, data)       REPEAT_MACRO220(macro, data)   macro(220, data)
#define REPEAT_MACRO222(macro, data)       REPEAT_MACRO221(macro, data)   macro(221, data)
#define REPEAT_MACRO223(macro, data)       REPEAT_MACRO222(macro, data)   macro(222, data)
#define REPEAT_MACRO224(macro, data)       REPEAT_MACRO223(macro, data)   macro(223, data)
#define REPEAT_MACRO225(macro, data)       REPEAT_MACRO224(macro, data)   macro(224, data)
#define REPEAT_MACRO226(macro, data)       REPEAT_MACRO225(macro, data)   macro(225, data)
#define REPEAT_MACRO227(macro, data)       REPEAT_MACRO226(macro, data)   macro(226, data)
#define REPEAT_MACRO228(macro, data)       REPEAT_MACRO227(macro, data)   macro(227, data)
#define REPEAT_MACRO229(macro, data)       REPEAT_MACRO228(macro, data)   macro(228, data)
#define REPEAT_MACRO230(macro, data)       REPEAT_MACRO229(macro, data)   macro(229, data)
#define REPEAT_MACRO231(macro, data)       REPEAT_MACRO230(macro, data)   macro(230, data)
#define REPEAT_MACRO232(macro, data)       REPEAT_MACRO231(macro, data)   macro(231, data)
#define REPEAT_MACRO233(macro, data)       REPEAT_MACRO232(macro, data)   macro(232, data)
#define REPEAT_MACRO234(macro, data)       REPEAT_MACRO233(macro, data)   macro(233, data)
#define REPEAT_MACRO235(macro, data)       REPEAT_MACRO234(macro, data)   macro(234, data)
#define REPEAT_MACRO236(macro, data)       REPEAT_MACRO235(macro, data)   macro(235, data)
#define REPEAT_MACRO237(macro, data)       REPEAT_MACRO236(macro, data)   macro(236, data)
#define REPEAT_MACRO238(macro, data)       REPEAT_MACRO237(macro, data)   macro(237, data)
#define REPEAT_MACRO239(macro, data)       REPEAT_MACRO238(macro, data)   macro(238, data)
#define REPEAT_MACRO240(macro, data)       REPEAT_MACRO239(macro, data)   macro(239, data)
#define REPEAT_MACRO241(macro, data)       REPEAT_MACRO240(macro, data)   macro(240, data)
#define REPEAT_MACRO242(macro, data)       REPEAT_MACRO241(macro, data)   macro(241, data)
#define REPEAT_MACRO243(macro, data)       REPEAT_MACRO242(macro, data)   macro(242, data)
#define REPEAT_MACRO244(macro, data)       REPEAT_MACRO243(macro, data)   macro(243, data)
#define REPEAT_MACRO245(macro, data)       REPEAT_MACRO244(macro, data)   macro(244, data)
#define REPEAT_MACRO246(macro, data)       REPEAT_MACRO245(macro, data)   macro(245, data)
#define REPEAT_MACRO247(macro, data)       REPEAT_MACRO246(macro, data)   macro(246, data)
#define REPEAT_MACRO248(macro, data)       REPEAT_MACRO247(macro, data)   macro(247, data)
#define REPEAT_MACRO249(macro, data)       REPEAT_MACRO248(macro, data)   macro(248, data)
#define REPEAT_MACRO250(macro, data)       REPEAT_MACRO249(macro, data)   macro(249, data)
#define REPEAT_MACRO251(macro, data)       REPEAT_MACRO250(macro, data)   macro(250, data)
#define REPEAT_MACRO252(macro, data)       REPEAT_MACRO251(macro, data)   macro(251, data)
#define REPEAT_MACRO253(macro, data)       REPEAT_MACRO252(macro, data)   macro(252, data)
#define REPEAT_MACRO254(macro, data)       REPEAT_MACRO253(macro, data)   macro(253, data)
#define REPEAT_MACRO255(macro, data)       REPEAT_MACRO254(macro, data)   macro(254, data)
#define REPEAT_MACRO256(macro, data)       REPEAT_MACRO255(macro, data)   macro(255, data)


#endif  // _REPEAT_MACRO_H_
