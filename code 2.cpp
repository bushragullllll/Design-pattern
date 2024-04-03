#include <iostream>

class Singleton {
public:
  static Singleton& get() {
    static Singleton instance;
    return instance;
  }
  int getValue() {
    return value;
  }
  void setValue(int value_) {
    value = value_;
  }
private:
  Singleton() = default;
  ~Singleton() = default;
  int value;
};

int main() {
  Singleton::get().setValue(42);
  std::cout << "value=" << Singleton::get().getValue() << '\n';
}