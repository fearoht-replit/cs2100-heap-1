#include <iostream>

#define MAX 1
#define MIN 0

template<typename T>
class Node{
  public:
    Node<T>*  left;
    Node<T>*  right;
    Node<T>*  father;
    T         value;

    Node(Node* _left = nullptr, Node* _right = nullptr, Node* _father = nullptr):
    left(_left), right(_right), father(_father){}

    ~Node(void){}
};

template<typename N, int type>
class Heapify{
  public:

  static void up (N* _node){
    std::cout<< "Up!";
  }
  static void down (N* _node){
    std::cout<< "Down!";
  }
};

template<typename N>
class Heapify<N,MIN>{
  public:

  static void up (N* _node){
    std::cout<< "MIN: Up!";
  }

  static void down (N* _node){
    std::cout<< "MIN: Down!";
  }
};

template<typename N>
class Heapify<N,MAX>{
  public:

  static void up (N* _node){
    std::cout<< "MAX: Up!";
  }
  static void  down (N* _node){
    std::cout<< "MAX: Down!";
  }
};


template<typename T, int type>
class Heap{

  Node<T>* root;

  public:
    Heap (void):root(nullptr){} 

    ~Heap(void){}

    void insert(){
      Node<T>* tmp = root;
      //TODO: Insert
      Heapify<Node<T>,type>::up(tmp);
    }
};



int main() {
  Heap<int,MIN> _heap;
  _heap.insert();
}