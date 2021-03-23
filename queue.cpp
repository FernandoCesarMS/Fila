#include "queue.h"

struct Node {
  int key;
  Node* next;
};

Queue::Queue() {
  this->front_ = nullptr;
  this->back_ = nullptr;
}

void Queue::push(int k) {
  
}

void Queue::pop() {
  // TODO
}

int Queue::front() const {
  return 0; // TODO
}

int Queue::back() const {
  return 0; // TODO
}

int Queue::count() const {
  Node *end = this->front_;
  int tamanho = 0;
  while (end != nullptr){
    tamanho++;
    end = end->next;
  }
  return tamanho;
}