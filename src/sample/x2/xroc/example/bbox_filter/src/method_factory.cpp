/**
 * @file method_factory.cpp
 * @author your name (you@domain.com)
 * @brief DO NOT MODIFY THIS FILE, WHICH IS AUTO GENERATED BY COMPILER
 * @version 0.1
 * @date 2018-11-23
 *
 * @copyright Copyright (c) 2018
 *
 */

#include "hobotxroc/method_factory.h"

#include "method/bbox_filter.h"

namespace HobotXRoc {
MethodPtr MethodFactory::CreateMethod(const std::string &method_name) {
  if ("BBoxFilter" == method_name) {
    return MethodPtr(new BBoxFilter());
  } else {
    return MethodPtr();
  }
}
}  // namespace HobotXRoc
