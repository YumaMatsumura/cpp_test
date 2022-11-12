#include <iostream>
#include <complex>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>

int main(int argc, char* argv[])
{
  Eigen::Matrix3f m; // float型の3次元行列（3x3）
  Eigen::Matrix3f m1, m2;
  
  m = Eigen::Matrix3f::Identity();
  std::cout << "単位行列" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = Eigen::Matrix3f::Zero();
  std::cout << "全要素0の行列" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = Eigen::Matrix3f::Ones();
  std::cout << "全要素1の行列" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = Eigen::Matrix3f::Constant(0.25f);
  std::cout << "全要素同じ値の行列" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m1 << 0.1f, 0.2f, 0.3f,
       0.4f, 0.5f, 0.6f,
       0.7f, 0.8f, 0.9f;
  std::cout << "3x3要素いっぺんに値を代入" << std::endl;
  std::cout << m1 << std::endl;
  std::cout << "" << std::endl;
  
  m2(0, 0) = 0.9f;
  m2(0, 1) = 0.8f;
  m2(0, 2) = 0.7f;
  m2(1, 0) = 0.6f;
  m2(1, 1) = 0.5f;
  m2(1, 2) = 0.4f;
  m2(2, 0) = 0.3f;
  m2(2, 1) = 0.2f;
  m2(2, 2) = 0.1f;
  std::cout << "要素1つずつ値を代入" << std::endl;
  std::cout << m2 << std::endl;
  std::cout << "" << std::endl;
  
  m = m1 + m2;
  std::cout << "行列同士の足し算" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = m1 - m2;
  std::cout << "行列同士の引き算" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = m1 * 0.2f;
  std::cout << "行列の全要素に定数をかける" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = m1 / 0.2f;
  std::cout << "行列の全要素を定数で割る" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  m = m1.inverse();
  std::cout << "逆行列" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  Eigen::Matrix2f m3, m4;
  m3 << 0.3f, 0.6f,
        0.2f, 0.4f;
  m4 = m3.inverse();
  std::cout << "逆行列が存在しない場合" << std::endl;
  std::cout << m4 << std::endl;
  std::cout << "" << std::endl;
  
  Eigen::Matrix<complex<float>, 3, 3> m5; // 複素数の3x3行列
  m = m1.conjugate();
  std::cout << "" << std::endl;
  std::cout << m << std::endl;
  std::cout << "" << std::endl;
  
  return 0;
}
