/*
 * tos_cpu_def.h
 *
 *  Created on: Sep 7, 2019
 *      Author: ace
 */

#ifndef _TOS_CPU_DEF_H_
#define _TOS_CPU_DEF_H_

enum CPU_WORD_SIZE {
    CPU_WORD_SIZE_08,
    CPU_WORD_SIZE_16,
    CPU_WORD_SIZE_32,
    CPU_WORD_SIZE_64,
};

enum CPU_STK_GROWTH {
    CPU_STK_GROWTH_ASCENDING,
    CPU_STK_GROWTH_DESCENDING,
};

#endif /* _TOS_CPU_DEF_H_ */
