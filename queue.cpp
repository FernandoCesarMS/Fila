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
  if (this->count() == 0){
    Node* x = new Node;
    x->key = k;
    x->next = nullptr;
    this->front_ = x;
    this->back_ = x;
  }
  else{
    Node* x = new Node{k,nullptr};
    this->back_->next = x;
    this->back_ = x;
  }
}

void Queue::pop() {
  if (this->count() == 0){
    throw EmptyException();
  }
  else if (this->count() == 1){
    this->front_ = this->back_ = nullptr;
  }
  else{
    Node* x = new Node{this->front_->next->key,this->front_->next->next};
    this->front_ = x;
  }
}

int Queue::front() const {
  if (this->count() == 0){
    throw EmptyException();  
  }
  else{
    return this->front_->key;
  }
}

int Queue::back() const {
  if (this->count()== 0){
    throw EmptyException();  
  }
  else{
    return this->back_->key;   
  }
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