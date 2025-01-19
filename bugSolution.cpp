int main() {
  int* ptr = nullptr; 
  if (ptr != nullptr) { 
    *ptr = 10; // Dereferencing only if not null
  } else {
    std::cerr << "Error: Pointer is null" << std::endl;
  }
  return 0;
}