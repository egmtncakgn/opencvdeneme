// 25.05.24 Murtaza reisin derslerinden ilerliyorum

#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Main metodunun kodlar�m�z� g�rmesini sa�l�yoruz normalde
// header dosyas� ile yapmam�z laz�m hen�z header dosyas� yazmay� 
// bilmiyorum
static void VideoOkuma();
static void ResimOkuma();
static void WebCamOkuma();


void main() {
	VideoOkuma();
}

// Resim Okuma kodlar�
static void ResimOkuma() {
	string yol = "Resources/test.png";

	// Resmi matrix e d�n��t�r�yoruz
	Mat res = imread(yol);

	// Ekranda g�ster 
	imshow("Test Ekran�", res);
	waitKey(0);

}

// Videodan okuma kodlar�
static void VideoOkuma() {
	string yol = "Resources/test_video.mp4";
	VideoCapture cap(yol);
	Mat res;
	while (true)
	{
		// imread yerine capureden gelen res matrixinin i�ine
		// yaz�l�yor
		cap.read(res);

		// Ekranda g�ster 
		imshow("Test Ekran�", res);
		
		// Burada waitKey de�eri �nemli videonun fpsini belirliyor
		// E�er 0 girilirse kullan�c�dan input bekliyor
		waitKey(25);
	}
}

// WebCamden okuma kodlar�
static void WebCamOkuma() {
	// Cap() i�ine cihaz�n idsi girilerek farkl� ayg�tlardan g�r�nt�
	// al�nabilir
	VideoCapture cap(0);
	Mat res;

	while (true)
	{
		// imread yerine capureden gelen res matrixinin i�ine
		// yaz�l�yor
		cap.read(res);

		// Ekranda g�ster 
		imshow("Test Ekran�", res);

		// Burada waitKey de�eri �nemli videonun fpsini belirliyor
		// E�er 0 girilirse kullan�c�dan input bekliyor
		waitKey(1);
	}
}