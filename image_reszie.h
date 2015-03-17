#ifndef _IMAGE_RESIZE_H_
#define _IMAGE_RESIZE_H_

#include "header.h"

namespace imageResize
{
	class ImageResize
	{
	public:
		ImageResize(IplImage*, int width, int height);/** 参数1是原图像，参数2是缩放图片的宽，参数3是缩放图片的高*/
		~ImageResize();
		IplImage* resize_image();

	private:
		IplImage* ResizeImage;
		IplImage* SrcImage;

		double Scale;

		int Width, Height;
		int ResizeWidth, ResizeHeight;

	};
}



#endif  /*_IMAGE_RESIZE_H_*/