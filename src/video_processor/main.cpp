#include <ros/ros.h>
#include "tracking.h"

int main(int argc, char *argv[]) {

  /* fallback video topic if nothing is provided in argv */
  std::string video_topic = "/ardrone/front/image_raw";

  if (argc >= 2 ) {
    video_topic = argv[1];
  }

  ros::init(argc, argv, "image_converter");
  ImageConverter ic;

  std::cout << "This program is converting messages" << std::endl ;
  ros::spin();
  return 0;

}
