/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/kiran/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogWrite.srv
 *
 */


#ifndef ROS_ARDUINO_MSGS_MESSAGE_ANALOGWRITE_H
#define ROS_ARDUINO_MSGS_MESSAGE_ANALOGWRITE_H

#include <ros/service_traits.h>


#include <ros_arduino_msgs/AnalogWriteRequest.h>
#include <ros_arduino_msgs/AnalogWriteResponse.h>


namespace ros_arduino_msgs
{

struct AnalogWrite
{

typedef AnalogWriteRequest Request;
typedef AnalogWriteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AnalogWrite
} // namespace ros_arduino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_arduino_msgs::AnalogWrite > {
  static const char* value()
  {
    return "ee913b2ec475c5064b101e580e55ee24";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogWrite&) { return value(); }
};

template<>
struct DataType< ::ros_arduino_msgs::AnalogWrite > {
  static const char* value()
  {
    return "ros_arduino_msgs/AnalogWrite";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogWrite&) { return value(); }
};


// service_traits::MD5Sum< ::ros_arduino_msgs::AnalogWriteRequest> should match 
// service_traits::MD5Sum< ::ros_arduino_msgs::AnalogWrite > 
template<>
struct MD5Sum< ::ros_arduino_msgs::AnalogWriteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::AnalogWrite >::value();
  }
  static const char* value(const ::ros_arduino_msgs::AnalogWriteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::AnalogWriteRequest> should match 
// service_traits::DataType< ::ros_arduino_msgs::AnalogWrite > 
template<>
struct DataType< ::ros_arduino_msgs::AnalogWriteRequest>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::AnalogWrite >::value();
  }
  static const char* value(const ::ros_arduino_msgs::AnalogWriteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_arduino_msgs::AnalogWriteResponse> should match 
// service_traits::MD5Sum< ::ros_arduino_msgs::AnalogWrite > 
template<>
struct MD5Sum< ::ros_arduino_msgs::AnalogWriteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::AnalogWrite >::value();
  }
  static const char* value(const ::ros_arduino_msgs::AnalogWriteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::AnalogWriteResponse> should match 
// service_traits::DataType< ::ros_arduino_msgs::AnalogWrite > 
template<>
struct DataType< ::ros_arduino_msgs::AnalogWriteResponse>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::AnalogWrite >::value();
  }
  static const char* value(const ::ros_arduino_msgs::AnalogWriteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_ANALOGWRITE_H