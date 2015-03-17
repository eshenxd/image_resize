#include "image_reszie.h"

using namespace imageResize;

ImageResize::ImageResize(IplImage* img, int width, int height)
{
	Width = img->width;
	Height = img->height;

	Scale = (Width / width) <= (Height / height) ? (double)Width / width : (double)Height / height;

	ResizeWidth = cvRound( Width/Scale );
	ResizeHeight =cvRound( Height/Scale );

	SrcImage = cvCreateImage(cvSize(img->width, img->height), img->depth, img->nChannels);
	cvCopy(img, SrcImage);

	ResizeImage = cvCreateImage(cvSize(ResizeWidth, ResizeHeight), img->depth, img->nChannels);

}

ImageResize::~ImageResize()
{
	if (SrcImage)
		cvReleaseImage(&SrcImage);
	if (ResizeImage)
		cvReleaseImage(&ResizeImage);
}

/*
 *   change image size
 */

IplImage* ImageResize::resize_image()
{

	cvResize(SrcImage, ResizeImage);
	
	return ResizeImage;
}