// 25.05.24 Murtaza reisin derslerinden ilerliyorum

#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Main metodunun kodlarýmýzý görmesini saðlýyoruz normalde
// header dosyasý ile yapmamýz lazým henüz header dosyasý yazmayý 
// bilmiyorum
static void VideoOkuma();
static void ResimOkuma();
static void WebCamOkuma();


void main() {
	VideoOkuma();
}

// Resim Okuma kodlarý
static void ResimOkuma() {
	string yol = "Resources/test.png";

	// Resmi matrix e dönüþtürüyoruz
	Mat res = imread(yol);

	// Ekranda göster 
	imshow("Test Ekraný", res);
	waitKey(0);

}

// Videodan okuma kodlarý
static void VideoOkuma() {
	string yol = "Resources/test_video.mp4";
	VideoCapture cap(yol);
	Mat res;
	while (true)
	{
		// imread yerine capureden gelen res matrixinin içine
		// yazýlýyor
		cap.read(res);

		// Ekranda göster 
		imshow("Test Ekraný", res);
		
		// Burada waitKey deðeri önemli videonun fpsini belirliyor
		// Eðer 0 girilirse kullanýcýdan input bekliyor
		waitKey(25);
	}
}

// WebCamden okuma kodlarý
static void WebCamOkuma() {
	// Cap() içine cihazýn idsi girilerek farklý aygýtlardan görüntü
	// alýnabilir
	VideoCapture cap(0);
	Mat res;

	while (true)
	{
		// imread yerine capureden gelen res matrixinin içine
		// yazýlýyor
		cap.read(res);

		// Ekranda göster 
		imshow("Test Ekraný", res);

		// Burada waitKey deðeri önemli videonun fpsini belirliyor
		// Eðer 0 girilirse kullanýcýdan input bekliyor
		waitKey(1);
	}
}