#ifndef CUSTOM_SCOPED_PTR_H_
#define CUSTOM_SCOPED_PTR_H_

#include <assert.h>

namespace custom_nls {

    template <typename C>
    class scoped_ptr {

    public:

        explicit scoped_ptr(C* ptr = nullptr) : ptr_(ptr) {}

        ~scoped_ptr() { delete ptr_; }

        C& operator*() const {
            assert(ptr_ != nullptr);
            return *ptr_;
        }

        C* operator->() const {
            assert(ptr_ != nullptr);
            return ptr_;
        }

        C* get() const {
            return ptr_;
        }

        bool operator==(const C* ptr) const {
            return ptr_ == ptr;
        }

        bool operator!=(const C* ptr) const {
            return ptr_ != ptr;
        }

        void swap(scoped_ptr& other) {
            C* temp = ptr_;
            ptr_ = other.ptr_;
            other.ptr_ = temp;
        }

    private:
        C* ptr_;

        // Prevent deep and shallow copying
        scoped_ptr(const scoped_ptr& other);
        void operator=(const scoped_ptr& other);

    };
}

#endif  // CUSTOM_SCOPED_PTR_H_