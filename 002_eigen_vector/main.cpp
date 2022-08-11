#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>

int main(int argc, char* argv[])
{
  Eigen::Vector3f v; // float型の3次元ベクトル
  Eigen::Vector3f v1, v2;

  v = Eigen::Vector3f::Identity();
  std::cout << "単位ベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::Zero();
  std::cout << "全要素0のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::Ones();
  std::cout << "全要素1のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::UnitX();
  std::cout << "xのみ1のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::UnitY();
  std::cout << "yのみ1のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::UnitZ();
  std::cout << "zのみ1のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = Eigen::Vector3f::Constant(0.5f);
  std::cout << "x, y, zすべて同じ値のベクトル" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v << 0.1f, 0.2f, 0.3f;
  std::cout << "3要素いっぺんに値を代入する" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v1.x() = 1.0f;
  v1.y() = 2.0f;
  v1.z() = 3.0f;
  std::cout << "要素1つずつ代入" << std::endl;
  std::cout << v1 << std::endl;
  std::cout << "" << std::endl;
  
  v2(0) = 4.0f;
  v2(1) = 5.0f;
  v2(2) = 6.0f;
  std::cout << "要素1つずつ代入（別パターン）" << std::endl;
  std::cout << v2 << std::endl;
  std::cout << "" << std::endl;
  
  v = v1 + v2;
  std::cout << "ベクトル同士の足し算" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = v1 - v2;
  std::cout << "ベクトル同士の引き算" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = v1 * 0.5f;
  std::cout << "ベクトルの全要素に定数をかける" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  v = v1 / 0.5f;
  std::cout << "ベクトルの全要素を定数で割る" << std::endl;
  std::cout << v << std::endl;
  std::cout << "" << std::endl;
  
  float dot = v1.dot(v2);
  std::cout << "ベクトルの内積" << std::endl;
  std::cout << dot << std::endl;
  std::cout << "" << std::endl;
  
  Eigen::Vector3f cross = v1.cross(v2);
  std::cout << "ベクトルの外積" << std::endl;
  std::cout << cross << std::endl;
  std::cout << "" << std::endl;

  float norm = v1.norm();
  std::cout << "ベクトルの大きさ" << std::endl;
  std::cout << norm << std::endl;
  std::cout << "" << std::endl;
  
  Eigen::Vector3f n = v1.normalized();
  std::cout << "ベクトルの正規化（大きさ1のベクトルに変換）" << std::endl;
  std::cout << n << std::endl;
  std::cout << "" << std::endl;
  
  v1.normalize();
  std::cout << "ベクトルの正規化（変数に格納されている値を変更）" << std::endl;
  std::cout << v1 << std::endl;
  std::cout << "" << std::endl;
  
  return 0;
}
