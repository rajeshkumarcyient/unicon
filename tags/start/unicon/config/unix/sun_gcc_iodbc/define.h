/*
 * Icon configuration file for Sun 4 running Solaris 2.x with Cygnus gcc,
 * providing myodbc/iodbc database connectivity.
 */

#define UNIX 1
#define SUN

#define LoadFunc
#define SysOpt
#define NoRanlib

/* CPU architecture */
#define Double
#define StackAlign 8

/* use gcc to compile generated code */
#define CComp "gcc"
#define COpts "-I/usr/openwin/include -ldl"

#define NEED_UTIME
#define ISQL
#define Messaging 1
