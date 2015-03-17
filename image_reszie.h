#ifndef _IMAGE_RESIZE_H_
#define _IMAGE_RESIZE_H_

#include "header.h"

namespace imageResize
{
	class ImageResize
	{
	public:
		ImageResize(IplImage*, int width, int height);/** ����1��ԭͼ�񣬲���2������ͼƬ�Ŀ�����3������ͼƬ�ĸ�*/
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