#include <iostream>
#include <vector>
#include <string.h>

struct vec_struct
{
  std::vector<int> int_vec;
  int number;
};

void test1()
{
  vec_struct vs;
  memset(&vs, 0, sizeof(vs));

  vs.number = 2;
  std::cout << "vs.number: " << vs.number << std::endl;

  std::cout << "sizeof(vs): " << sizeof(vs) << std::endl;

  vs.int_vec.push_back(1);
  vs.int_vec.push_back(2);
  vs.int_vec.push_back(3);
  vs.int_vec.push_back(4);
  std::cout << "sizeof(vs): " << sizeof(vs) << std::endl;
  std::cout << "vs.init_vec.size():  " << vs.int_vec.size() << std::endl;

  for (std::vector<int>::iterator it = vs.int_vec.begin();
       it != vs.int_vec.end(); ++it) {
    std::cout << "it: " << *it << std::endl;
  }

  for (size_t i = 0; i < vs.int_vec.size(); i++) {
    std::cout << "vec[" << i << "]: " << vs.int_vec[i] << std::endl;
  }

  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << "it: " << *it << std::endl;
  }
}

void test2()
{
  vec_struct *vs = new vec_struct;
  memset(vs, 0, sizeof(vs));

  vs->number = 2;
  std::cout << "vs->number: " << vs->number << std::endl;

  std::cout << "sizeof(vs): " << sizeof(vs) << std::endl;

  vs->int_vec.push_back(1);
  vs->int_vec.push_back(2);
  vs->int_vec.push_back(3);
  vs->int_vec.push_back(4);
  std::cout << "sizeof(vs): " << sizeof(vs) << std::endl;
  std::cout << "vs->init_vec.size():  " << vs->int_vec.size() << std::endl;

  for (std::vector<int>::iterator it = vs->int_vec.begin();
       it != vs->int_vec.end(); ++it) {
    std::cout << "it: " << *it << std::endl;
  }

  for (size_t i = 0; i < vs->int_vec.size(); i++) {
    std::cout << "vec[" << i << "]: " << vs->int_vec[i] << std::endl;
  }

  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << "it: " << *it << std::endl;
  }

  delete vs;
}

int main(int argc, char *argv[])
{
  test2();

  return 0;
}
