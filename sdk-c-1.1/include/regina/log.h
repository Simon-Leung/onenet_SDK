#ifndef __REGINA_LOG_H__
#define __REGINA_LOG_H__

#include "regina/platform.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum regina_log_level_t {
    REGINA_LL_DEBUG,
    REGINA_LL_INFO,
    REGINA_LL_WARNING,
    REGINA_LL_ERROR,
    REGINA_LL_FATAL
} regina_log_level_t;


typedef void (*regina_log_func)(void *ctx, regina_log_level_t ll, const char *format, ...);
typedef struct regina_logger_t {
    regina_log_level_t ll;

    void *context;
    regina_log_func log;
} regina_logger_t;


REGINA_API extern regina_logger_t regina_logger;
REGINA_API void regina_log_set_logger(void *context, regina_log_func log_func);



#define regina_log_set_min_log_level(level) (regina_logger.ll = (level))


#define REGINA_LOG_BEGIN(LEVEL)                                         \
    do {                                                                \
        const regina_log_level_t ll = REGINA_LL_##LEVEL;                \
        if (regina_logger.ll <= ll) {                                   \
            void *ctx = regina_logger.context

#define REGINA_LOG_END() }} while(0)

#define REGINA_LOG0(LEVEL, format)                  \
    REGINA_LOG_BEGIN(LEVEL);                        \
    regina_logger.log(ctx, (ll), (format));         \
    REGINA_LOG_END()

#define REGINA_LOG1(LEVEL, format, arg1)                    \
    REGINA_LOG_BEGIN(LEVEL);                                \
    regina_logger.log(ctx, (ll), (format), (arg1));         \
    REGINA_LOG_END()

#define REGINA_LOG2(LEVEL, format, arg1, arg2)                      \
    REGINA_LOG_BEGIN(LEVEL);                                        \
    regina_logger.log(ctx, (ll), (format), (arg1), (arg2));         \
    REGINA_LOG_END()

#define REGINA_LOG3(LEVEL, format, arg1, arg2, arg3)                    \
    REGINA_LOG_BEGIN(LEVEL);                                            \
    regina_logger.log(ctx, (ll), (format), (arg1), (arg2), (arg3));     \
    REGINA_LOG_END()

#define REGINA_LOG4(LEVEL, format, arg1, arg2, arg3, arg4)              \
    REGINA_LOG_BEGIN(LEVEL);                                            \
    regina_logger.log(ctx, (ll), (format), arg1, arg2, arg3, arg4); \
    REGINA_LOG_END()

#define REGINA_LOG5(LEVEL, format, arg1, arg2, arg3, arg4, arg5)        \
    REGINA_LOG_BEGIN(LEVEL);                                            \
    regina_logger.log(ctx, (ll), (format), (arg1), (arg2), (arg3), (arg4), (arg5)); \
    REGINA_LOG_END()

#ifdef __cplusplus
}  /* extern "C */
#endif

#endif /* __REGINA_LOG_H__ */
