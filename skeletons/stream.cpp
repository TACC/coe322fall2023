class Stream { 
private:
  int last_result{0}; 
public:
  int next() {
    return last_result++; };
};

int main() {
  Stream ints;
  return 0;
}

