/*
	http://stackoverflow.com/a/6930407/3990396
*/

#pragma once

typedef struct {
    double r; // percent
    double g; // percent
    double b; // percent
} rgb;

typedef struct {
    double h; // angle in degrees
    double s; // percent
    double v; // percent
} hsv;

hsv   rgb2hsv(rgb in);
rgb   hsv2rgb(hsv in);
