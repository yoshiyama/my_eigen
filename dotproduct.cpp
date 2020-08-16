#include <iostream>
#include <Eigen/Core>
//#include <Eigen/Geometry>
  
using namespace Eigen;
using namespace std;

int main()
{
    Vector3f v;
    float x, y, z;

    x = v.x();
    y = v.y();
    z = v.z();

    v.x() = x;
    v.y() = y;
    v.z() = z;

    // こういう書き方もできる
    v(0) = x;
    v(1) = y;
    v(2) = z;

    // []の場合は添え字の正当性をチェックしない
    x = v[0];
    y = v[1];
    z = v[2];

  // こういう代入も可能
    v << 0.5f, 1.2f, -2.0f;

  // コピー
    Vector3f v1;
    v1 = v;
    float dot = v.dot(v1);
    // Vector3f cross = v.cross(v1);

    std::cout << dot << std::endl;
}