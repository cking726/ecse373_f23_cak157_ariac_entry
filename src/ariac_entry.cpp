#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

#include "std_srvs/Trigger.h"
#include "std_srvs/SetBool.h"

std_srvs::Trigger begin_comp;
std_srvs::SetBool my_bool_var;
my_bool_var.request.data = true;

//Idk how to write this one oop
ROS_ERROR_STREAM(begin_client.call("?"));




int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;
// %EndTag(NODEHANDLE)%

  /**
   * The advertise() function is how you tell ROS that you want to
   * publish on a given topic name. This invokes a call to the ROS
   * master node, which keeps a registry of who is publishing and who
   * is subscribing. After this advertise() call is made, the master
   * node will notify anyone who is trying to subscribe to this topic name,
   * and they will in turn negotiate a peer-to-peer connection with this
   * node.  advertise() returns a Publisher object which allows you to
   * publish messages on that topic through a call to publish().  Once
   * all copies of the returned Publisher object are destroyed, the topic
   * will be automatically unadvertised.
   *
   * The second parameter to advertise() is the size of the message queue
   * used for publishing messages.  If messages are published more quickly
   * than we can send them, the number here specifies how many messages to
   * buffer up before throwing some away.
   */
// %Tag(PUBLISHER)%
  ros::ServiceClient begin_client = n.serviceClient<std_srvs::Trigger>("ariac_entry");
  
  ROS_INFO("%s", msg.data.c_str());
  int service_call_succeeded;
  service_call_succeeded = begin_client.call(begin_comp);
  ROS_ERROR("Competition service call failed! Goodness Gracious!!");
  ROS_WARN("Competition service returned failure: %s", begin_comp.response.message.c_str());
  ROS_INFO("Competition service called successfully: %s", \
  begin_comp.response.message.c_str());
// %EndTag(ROSCONSOLE)%

    /**
     * The publish() function is how you send messages. The parameter
     * is the message object. The type of this object must agree with the type
     * given as a template parameter to the advertise<>() call, as was done
     * in the constructor above.
     */
// %Tag(PUBLISH)%
    chatter_pub.publish(msg);
// %EndTag(PUBLISH)%

// %Tag(SPINONCE)%
    ros::spinOnce();
// %EndTag(SPINONCE)%

// %Tag(RATE_SLEEP)%
    loop_rate.sleep();
// %EndTag(RATE_SLEEP)%
    ++count;
  }


  return 0;
}
// %EndTag(FULLTEXT)%
