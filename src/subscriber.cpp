/* 
 * File:   subscriber.cpp
 * Author: hpcl
 * 
 * Created on June 3, 2015, 9:59 AM
 */

#include "ros_rtt/subscriber.h"

namespace rosrtt
{
 
Subscriber::Subscriber() 
{ 
}
 
Subscriber::Subscriber(ConnectionBasePtr sub_connection, ros::Subscriber ros_subscriber) 
{
  subscription = sub_connection;
  ros_sub = ros_subscriber;
}

Subscriber::~Subscriber() 
{ 
}

}