#ifndef TYPES_H
#define TYPES_H
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;
typedef signed char sint8_t;
typedef signed int sint16_t;
typedef signed long long sint64_t;
typedef signed long sint32_t;
//###################################
typedef volatile unsigned char vuint8_t;
typedef volatile unsigned short vuint16_t;
typedef volatile unsigned long vuint32_t;
typedef volatile unsigned long long vuint64_t;
typedef volatile signed char vsint8_t;
typedef volatile signed int vsint16_t;
typedef volatile signed long long vsint64_t;
typedef volatile signed long vsint32_t;
//###################################
#define Bit_Set(var,bit) var|=(1<<bit)
#define Bit_Clear(var,bit) var&=(~(1<<bit))
#define Bit_Toggle(var,bit) var^=(1<<bit)


#endif