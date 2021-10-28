#include <cassert>
#include <stdexcept>

class Pyramid {
private:
    int length;
    int width;
    int height;
    void Validate() const;
public:
    Pyramid(int length, int width, int height);
    int Length() const;
    void Length(int length);
    int Width() const;
    void Width(int width);
    int Height() const;
    void Height(int height);
    float Volume() const;
};

Pyramid::Pyramid(int length, int width, int height) : length(length), width(width), height(height) {
    Validate();
}

void Pyramid::Validate() const {
    if (length <= 0 || width <= 0 || height <= 0) {
        throw std::invalid_argument("negative dimension");
    }
}

int Pyramid::Length() const { return length; }

void Pyramid::Length(int length) {
    this->length = length;
    Validate();
}

int Pyramid::Width() const { return width; }

void Pyramid::Width(int width) {
    this->width = width;
    Validate();
}

int Pyramid::Height() const { return height; }

void Pyramid::Height(int height) {
    this->height = height;
    Validate();
}

float Pyramid::Volume() const {
    return length * width * height / 3;
}

// Test
int main() {
    Pyramid pyramid(4, 5, 6);
    assert(pyramid.Length() == 4);
    assert(pyramid.Width() == 5);
    assert(pyramid.Height() == 6);
    assert(pyramid.Volume() == 40);

    bool caught{false};
    try {
        Pyramid invalid(-1, 2, 3);
    } catch (...) {
        caught = true;
    }
    assert(caught);
}
