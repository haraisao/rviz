/*
 * Cross platform macros.
 *
 */
#ifndef _RVIZ_DEFAULT_PLUGIN_DECL_H_
#define _RVIZ_DEFAULT_PLUGIN_DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #if defined(rviz_default_plugin_EXPORTS) // we are building a shared lib/dll
    #define RVIZ_DEFAULT_PLUGIN_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define RVIZ_DEFAULT_PLUGIN_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define RVIZ_DEFAULT_PLUGIN_DECL
#endif

#endif