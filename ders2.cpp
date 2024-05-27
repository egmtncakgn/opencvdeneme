// 25.05.24 Murtaza reisin derslerinden ilerliyorum

#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void main() {
		string path = "Resources/test.png";
		
		// Ana matrisimiz
		Mat img = imread(path);

		// Versiyonlar� saklayaca��m�z matrisleri olu�turduk
		Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

		// �lk �nce siyah beyaza �eviriyoruz
		// ��kt� de�i�kenlerimiz foksiyondan geliyor atama yapm�yoruz
		cvtColor(img, imgGray, COLOR_BGR2GRAY);

		// Blur ekliyoruz
		GaussianBlur(imgGray, imgBlur, Size(7, 7), 5, 0);

		// Kenar tespiti yap�yoruz
		Canny(imgBlur, imgCanny, 25, 75);

		// ??
		Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
		dilate(imgCanny, imgDil, kernel);
		erode(imgDil, imgErode, kernel);

		imshow("Image", img);
		imshow("Image Gray", imgGray);
		imshow("Image Blur", imgBlur);
		imshow("Image Canny", imgCanny);
		imshow("Image Dilation", imgDil);
		imshow("Image Erode", imgErode);
		waitKey(0);

}
