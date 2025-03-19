#ifndef _IOR_CALI_ANNOTAIONS_H
#define _IOR_CALI_ANNOTAIONS_H

#if !defined(_WIN32) && defined(HAVE_CALIPER)
#include <caliper/cali.h>
#else
#define CALI_MARK_BEGIN(name)
#define CALI_MARK_END(name)
#define CALI_MARK_FUNCTION_BEGIN
#define CALI_MARK_FUNCTION_END
#define CALI_MARK_LOOP_BEGIN(loop_id, name)
#define CALI_MARK_LOOP_END(loop_id)
#define CALI_MARK_ITERATION_BEGIN(loop_id, iter)
#define CALI_MARK_ITERATION_END(loop_id)
#endif

#endif /* _IOR_CALI_ANNOTAIONS_H */