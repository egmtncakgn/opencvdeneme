// 24.05.24 Staj için openCv ve c++ denemeleri için proje oluşturuldu
// Egmen Tunç Akgün

// 25.05.24 Build hatası çözüldü
// "Hata LNK1104 'opencv_world450d.lib' dosyası açılamıyor" 
// Hatası aldım sebebi openCV nin 4.5 versiyonu için olan tutoriali takip etmem
// benim kullandığım sürüm 4.9 'opencv_world450d.lib' yerine 'opencv_world490d.lib'
// yazdım düzeldi 


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

// Böyle kullanırsak :: yazmamıza gerek yok :)
using namespace cv;
using namespace std;


/*void main() {

    string path = "Resources/test.png";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

}*/