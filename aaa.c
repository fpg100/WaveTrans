#include <stdio.h>


/*
 0,0,0.0000]0,1,0.0000]0,2,0.0000]0,3,0.0000]0,4,0.0000]0,5,0.4330]0,6,0.7806]0,7,0.3536]0,8,0.1768]0,9,0.4507]0,10,0.3062]0,11,0.0000]0,12,0.0000]0,13,0.2500]0,14,0.2165]0,15,0.0000]0,16,0.2165]0,17,0.0000]0,18,0.0000]0,19,0.0000]1,0,0.2165]1,1,0.0000]1,2,0.0000]1,3,0.0000]1,4,0.0000]1,5,0.4330]1,6,0.4841]1,7,0.0000]1,8,0.3750]1,9,0.7395]1,10,0.8197]1,11,0.0000]1,12,0.0000]1,13,0.0000]1,14,0.0000]1,15,0.0000]1,16,0.0000]1,17,0.0000]1,18,0.0000]1,19,0.0000]2,0,0.2165]2,1,0.0000]2,2,0.0000]2,3,0.0000]2,4,0.0000]2,5,0.3750]2,6,0.0000]2,7,0.0000]2,8,0.6960]2,9,0.8004]2,10,0.5303]2,11,0.0000]2,12,0.0000]2,13,0.0000]2,14,0.0000]2,15,0.0000]2,16,0.0000]2,17,0.0000]2,18,0.1250]2,19,0.0000]3,0,0.0000]3,1,0.0000]3,2,0.0000]3,3,0.0000]3,4,0.0000]3,5,0.2500]3,6,0.3062]3,7,0.2795]3,8,0.4146]3,9,0.4146]3,10,0.2165]3,11,0.0000]3,12,0.1250]3,13,0.0000]3,14,0.0000]3,15,0.0000]3,16,0.0000]3,17,0.0000]3,18,0.1250]3,19,0.0000]4,0,0.0000]4,1,0.0000]4,2,0.0000]4,3,0.0000]4,4,0.0000]4,5,0.0000]4,6,0.3307]4,7,0.0000]4,8,0.3307]4,9,0.3307]4,10,0.1250]4,11,0.0000]4,12,0.1768]4,13,0.0000]4,14,0.0000]4,15,0.0000]4,16,0.0000]4,17,0.0000]4,18,0.2165]4,19,0.0000]5,0,0.0000]5,1,0.0000]5,2,0.0000]5,3,0.0000]5,4,0.0000]5,5,0.0000]5,6,0.3062]5,7,0.2500]5,8,0.1250]5,9,0.2500]5,10,0.0000]5,11,0.0000]5,12,0.0000]5,13,0.0000]5,14,0.0000]5,15,0.0000]5,16,0.0000]5,17,0.0000]5,18,0.1250]5,19,0.0000]6,0,0.2165]6,1,0.0000]6,2,0.0000]6,3,0.0000]6,4,0.0000]6,5,0.0000]6,6,0.5000]6,7,0.7289]6,8,0.3062]6,9,0.2165]6,10,0.0000]6,11,0.1768]6,12,0.2500]6,13,0.1768]6,14,0.0000]6,15,0.0000]6,16,0.2795]6,17,0.0000]6,18,0.7289]6,19,0.7395]7,0,0.1768]7,1,0.3307]7,2,0.0000]7,3,0.0000]7,4,0.0000]7,5,0.0000]7,6,0.2500]7,7,0.0000]7,8,0.0000]7,9,0.0000]7,10,0.0000]7,11,0.5728]7,12,0.5863]7,13,0.0000]7,14,0.0000]7,15,0.0000]7,16,0.1250]7,17,0.0000]7,18,0.0000]7,19,0.0000]8,0,0.0000]8,1,0.0000]8,2,0.0000]8,3,0.0000]8,4,0.0000]8,5,0.0000]8,6,0.1250]8,7,0.0000]8,8,0.0000]8,9,0.0000]8,10,0.0000]8,11,0.2500]8,12,0.2165]8,13,0.1768]8,14,0.0000]8,15,0.2165]8,16,0.3307]8,17,0.0000]8,18,0.0000]8,19,0.0000]9,0,0.0000]9,1,0.0000]9,2,0.0000]9,3,0.0000]9,4,0.0000]9,5,0.0000]9,6,0.0000]9,7,0.0000]9,8,0.0000]9,9,0.0000]9,10,0.0000]9,11,0.0000]9,12,0.0000]9,13,0.0000]9,14,0.0000]9,15,0.1250]9,16,0.0000]9,17,0.0000]9,18,0.0000]9,19,0.0000]10,0,0.0000]10,1,0.0000]10,2,0.0000]10,3,0.0000]10,4,0.0000]10,5,0.0000]10,6,0.0000]10,7,0.0000]10,8,0.0000]10,9,0.0000]10,10,0.0000]10,11,0.0000]10,12,0.0000]10,13,0.0000]10,14,0.0000]10,15,0.2795]10,16,0.1250]10,17,0.0000]10,18,0.0000]10,19,0.0000]11,0,0.0000]11,1,0.0000]11,2,0.0000]11,3,0.0000]11,4,0.0000]11,5,0.0000]11,6,0.0000]11,7,0.0000]11,8,0.0000]11,9,0.0000]11,10,0.0000]11,11,0.0000]11,12,0.0000]11,13,0.0000]11,14,0.0000]11,15,0.0000]11,16,0.0000]11,17,0.0000]11,18,0.0000]11,19,0.0000]12,0,0.0000]12,1,0.0000]12,2,0.0000]12,3,0.0000]12,4,0.1768]12,5,0.0000]12,6,0.0000]12,7,0.0000]12,8,0.0000]12,9,0.0000]12,10,0.0000]12,11,0.1250]12,12,0.1250]12,13,0.0000]12,14,0.0000]12,15,0.1768]12,16,0.1250]12,17,0.0000]12,18,0.0000]12,19,0.0000]13,0,0.0000]13,1,0.0000]13,2,0.0000]13,3,0.0000]13,4,0.0000]13,5,0.0000]13,6,0.0000]13,7,0.0000]13,8,0.0000]13,9,0.0000]13,10,0.0000]13,11,0.0000]13,12,0.0000]13,13,0.0000]13,14,0.0000]13,15,0.0000]13,16,0.0000]13,17,0.0000]13,18,0.0000]13,19,0.0000]14,0,0.0000]14,1,0.0000]14,2,0.0000]14,3,0.0000]14,4,0.0000]14,5,0.0000]14,6,0.0000]14,7,0.0000]14,8,0.0000]14,9,0.0000]14,10,0.0000]14,11,0.0000]14,12,0.0000]14,13,0.0000]14,14,0.0000]14,15,0.0000]14,16,0.0000]14,17,0.0000]14,18,0.0000]14,19,0.0000]15,0,0.0000]15,1,0.0000]15,2,0.0000]15,3,0.0000]15,4,0.1768]15,5,0.0000]15,6,0.0000]15,7,0.0000]15,8,0.0000]15,9,0.0000]15,10,0.6374]15,11,0.6614]15,12,0.0000]15,13,0.0000]15,14,0.0000]15,15,0.1250]15,16,0.0000]15,17,0.0000]15,18,0.0000]15,19,0.0000]16,0,0.0000]16,1,0.0000]16,2,0.0000]16,3,0.0000]16,4,0.6250]16,5,0.5863]16,6,0.0000]16,7,0.0000]16,8,0.0000]16,9,0.0000]16,10,0.1250]16,11,0.1768]16,12,0.0000]16,13,0.0000]16,14,0.1768]16,15,0.0000]16,16,0.0000]16,17,0.0000]16,18,0.0000]16,19,0.0000]17,0,0.7500]17,1,0.6847]17,2,0.0000]17,3,0.0000]17,4,0.0000]17,5,0.2795]17,6,0.0000]17,7,0.0000]17,8,0.0000]17,9,0.0000]17,10,0.0000]17,11,0.0000]17,12,0.0000]17,13,0.0000]17,14,0.7603]17,15,0.7181]17,16,0.2165]17,17,0.0000]17,18,0.0000]17,19,0.0000]18,0,0.0000]18,1,0.0000]18,2,0.0000]18,3,0.0000]18,4,0.0000]18,5,0.0000]18,6,0.0000]18,7,0.6124]18,8,0.7706]18,9,0.1250]18,10,0.0000]18,11,0.0000]18,12,0.0000]18,13,0.0000]18,14,0.0000]18,15,0.0000]18,16,0.0000]18,17,0.0000]18,18,0.0000]18,19,0.0000]19,0,0.0000]19,1,0.7181]19,2,0.6731]19,3,0.0000]19,4,0.0000]19,5,0.0000]19,6,0.0000]19,7,0.0000]19,8,0.0000]19,9,0.0000]19,10,0.0000]19,11,0.0000]19,12,0.0000]19,13,0.0000]19,14,0.0000]19,15,0.0000]19,16,0.0000]19,17,0.0000]19,18,0.0000]19,19,0.0000]20,0,0.0000]20,1,0.2165]20,2,0.0000]20,3,0.0000]20,4,0.0000]20,5,0.0000]20,6,0.0000]20,7,0.0000]20,8,0.0000]20,9,0.0000]20,10,0.0000]20,11,0.0000]20,12,0.0000]20,13,0.0000]20,14,0.0000]20,15,0.0000]20,16,0.0000]20,17,0.0000]20,18,0.0000]20,19,0.0000]21,0,0.0000]21,1,0.0000]21,2,0.0000]21,3,0.0000]21,4,0.0000]21,5,0.0000]21,6,0.0000]21,7,0.0000]21,8,0.0000]21,9,0.0000]21,10,0.0000]21,11,0.0000]21,12,0.0000]21,13,0.0000]21,14,0.0000]21,15,0.0000]21,16,0.0000]21,17,0.0000]21,18,0.0000]21,19,0.0000]22,0,0.0000]22,1,0.0000]22,2,0.0000]22,3,0.5000]22,4,0.0000]22,5,0.0000]22,6,0.0000]22,7,0.0000]22,8,0.0000]22,9,0.0000]22,10,0.0000]22,11,0.0000]22,12,0.0000]22,13,0.0000]22,14,0.0000]22,15,0.0000]22,16,0.0000]22,17,0.0000]22,18,0.0000]22,19,0.0000]23,0,0.0000]23,1,0.0000]23,2,0.0000]23,3,0.0000]23,4,0.0000]23,5,0.0000]23,6,0.0000]23,7,0.0000]23,8,0.0000]23,9,0.0000]23,10,0.0000]23,11,0.0000]23,12,0.0000]23,13,0.0000]23,14,0.0000]23,15,0.0000]23,16,0.0000]23,17,0.0000]23,18,0.0000]23,19,0.0000]24,0,0.0000]24,1,0.0000]24,2,0.0000]24,3,0.0000]24,4,0.0000]24,5,0.0000]24,6,0.0000]24,7,0.0000]24,8,0.0000]24,9,0.1250]24,10,0.0000]24,11,0.0000]24,12,0.0000]24,13,0.0000]24,14,0.0000]24,15,0.0000]24,16,0.0000]24,17,0.0000]24,18,0.0000]24,19,0.0000]25,0,0.0000]25,1,0.0000]25,2,0.0000]25,3,0.0000]25,4,0.0000]25,5,0.0000]25,6,0.0000]25,7,0.0000]25,8,0.0000]25,9,0.0000]25,10,0.0000]25,11,0.0000]25,12,0.0000]25,13,0.0000]25,14,0.0000]25,15,0.0000]25,16,0.0000]25,17,0.0000]25,18,0.0000]25,19,0.0000]26,0,0.0000]26,1,0.0000]26,2,0.0000]26,3,0.0000]26,4,0.0000]26,5,0.0000]26,6,0.0000]26,7,0.0000]26,8,0.0000]26,9,0.0000]26,10,0.0000]26,11,0.0000]26,12,0.0000]26,13,0.0000]26,14,0.0000]26,15,0.0000]26,16,0.6250]26,17,0.4146]26,18,0.5728]26,19,0.0000]27,0,0.0000]27,1,0.0000]27,2,0.0000]27,3,0.0000]27,4,0.0000]27,5,0.0000]27,6,0.0000]27,7,0.0000]27,8,0.0000]27,9,0.0000]27,10,0.0000]27,11,0.0000]27,12,0.6374]27,13,0.6374]27,14,0.0000]27,15,0.0000]27,16,0.0000]27,17,0.0000]27,18,0.0000]27,19,0.0000]28,0,0.0000]28,1,0.0000]28,2,0.0000]28,3,0.0000]28,4,0.0000]28,5,0.0000]28,6,0.0000]28,7,0.0000]28,8,0.0000]28,9,0.0000]28,10,0.0000]28,11,0.0000]28,12,0.0000]28,13,0.0000]28,14,0.0000]28,15,0.0000]28,16,0.0000]28,17,0.0000]28,18,0.0000]28,19,0.0000]29,0,0.0000]29,1,0.0000]29,2,0.6731]29,3,0.5863]29,4,0.0000]29,5,0.0000]29,6,0.0000]29,7,0.0000]29,8,0.0000]29,9,0.0000]29,10,0.0000]29,11,0.0000]29,12,0.0000]29,13,0.0000]29,14,0.0000]29,15,0.0000]29,16,0.0000]29,17,0.0000]29,18,0.0000]29,19,0.0000]30,0,0.0000]30,1,0.0000]30,2,0.0000]30,3,0.0000]30,4,0.0000]30,5,0.0000]30,6,0.0000]30,7,0.0000]30,8,0.0000]30,9,0.0000]30,10,0.0000]30,11,0.0000]30,12,0.0000]30,13,0.0000]30,14,0.0000]30,15,0.0000]30,16,0.0000]30,17,0.0000]30,18,0.0000]30,19,0.0000]31,0,0.0000]31,1,0.0000]31,2,0.0000]31,3,0.0000]31,4,0.0000]31,5,0.0000]31,6,0.0000]31,7,0.0000]31,8,0.0000]31,9,0.0000]31,10,0.0000]31,11,0.0000]31,12,0.0000]31,13,0.6960]31,14,0.6847]31,15,0.7071]31,16,0.6614]31,17,0.0000]31,18,0.0000]31,19,0.0000
 */


float data[32*20] = {0.0,0.0,0.0,0.0,0.0,0.433,0.7806,0.3536,0.1768,0.4507,0.3062,0.0,0.0,0.25,0.2165,0.0,0.2165,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.433,0.4841,0.0,0.375,0.7395,0.8197,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.375,0.0,0.0,0.696,0.8004,0.5303,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.25,0.3062,0.2795,0.4146,0.4146,0.2165,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.3307,0.0,0.3307,0.3307,0.125,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.3062,0.25,0.125,0.25,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.2165,0.0,0.0,0.0,0.0,0.0,0.5,0.7289,0.3062,0.2165,0.0,0.1768,0.25,0.1768,0.0,0.0,0.2795,0.0,0.7289,0.7395,0.1768,0.3307,0.0,0.0,0.0,0.0,0.25,0.0,0.0,0.0,0.0,0.5728,0.5863,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.25,0.2165,0.1768,0.0,0.2165,0.3307,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2795,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.125,0.0,0.0,0.1768,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.6374,0.6614,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.625,0.5863,0.0,0.0,0.0,0.0,0.125,0.1768,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.75,0.6847,0.0,0.0,0.0,0.2795,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.7603,0.7181,0.2165,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.6124,0.7706,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.7181,0.6731,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.625,0.4146,0.5728,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.6374,0.6374,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.6731,0.5863,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.696,0.6847,0.7071,0.6614,0.0,0.0,0.0};

int main(int argc, char *argv[]) {
	
	float dataa[32][20] = {0};

	for (int i=0; i<32; i++) {
		
		for (int j=0; j<20; j++) {
		
			dataa[i][j] = data[i*20 + j];
		}
	}
	
	int sortData[20][4];
	float sortValue[20][4];	
	
	for (int i=0; i<4; i++) {
		
		for (int j=0; j<20; j++) {
		
			sortData[j][i] = -1;
			sortValue[j][i] = -1;
		}
	}
	
	for (int i=0; i<20; i++) {	
		
		for (int k=0; k<4; k++) {
			
			int tmp = -1;
			float tmpData = 0;
			int aa = 0;
			
			for (int j=0; j<32; j++) {
							
				if (dataa[j][i] > tmpData && dataa[j][i] != 0) {
					tmp = j;
					tmpData = dataa[j][i];
					aa = 1;
				}
			}
			
			if	(aa == 1) {
				
				sortValue[i][k] = dataa[tmp][i];
				dataa[tmp][i] = 0;
				sortData[i][k] = tmp;
				aa = 0;
			}
		}
	}
	
	////////////////////////////
	
	printf("$json_value = '[");
		
	for (int i=0; i<4; i++) {
		
		printf("[");
		
		for (int j=0; j<20; j++) {
			printf("%f", sortValue[j][i]);
			if (j<19) {
						
				printf(",");
			}
		}
		
		
		printf("]");
		if (i<3) {
			
			printf(",");
		}
	}
	
	printf("]';\n\n");
	
	
	
	
	
	printf("$json = '[");
	
	
	for (int i=0; i<4; i++) {
		
		printf("[");
		
		for (int j=0; j<20; j++) {
			printf("%d", sortData[j][i]);
			if (j<19) {
						
				printf(",");
			}
		}
		
		
		printf("]");
		if (i<3) {
			
			printf(",");
		}
	}
	
	printf("]';");
}