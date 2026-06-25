

#define MAINPREFIX z
#define PREFIX cadcore

#define AUTHOR QUOTE(Rowdy Rodent Industries)
#define MOD_NAME_BEAUTIFIED QUOTE(Cadian Core)

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}

#include "script_debug.hpp"

#ifndef RELEASE_BUILD
    #define DEBUG_ENABLED_MAIN
#endif

#ifdef SUBCOMPONENT
    #ifdef SUBCOMPONENT_BEAUTIFIED
        #define COMPONENT_NAME QUOTE(Cadian Core - SUBCOMPONENT_BEAUTIFIED)
    #else
        #define COMPONENT_NAME QUOTE(Cadian Core - SUBCOMPONENT)
    #endif
#else
    #ifdef COMPONENT_BEAUTIFIED
        #define COMPONENT_NAME QUOTE(Cadian Core - COMPONENT_BEAUTIFIED)
    #else
        #define COMPONENT_NAME QUOTE(Cadian Core - COMPONENT)
    #endif
#endif
