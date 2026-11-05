// Vector3DLib.h
// Заголовковий файл статичної бібліотеки Vector3DLib
// (клас vector3D з лабораторної роботи №3, варіант 2)
#pragma once

namespace Vector3DLib
{
    class vector3D
    {
    private:
        double x, y, z;

    public:
        // 1. Конструктор без параметрів
        vector3D();
        // 2. Конструктор з трьома параметрами
        vector3D(double x1, double y1, double z1);
        // 3. Конструктор копіювання
        vector3D(const vector3D& v);

        // Виведення координат вектора у форматі (x, y, z)
        void print() const;

        // Додавання та віднімання векторів
        vector3D operator+(const vector3D& v) const;
        vector3D operator-(const vector3D& v) const;

        // Скалярний добуток двох векторів
        double operator*(const vector3D& v) const;
        // Множення вектора на скаляр
        vector3D operator*(double k) const;

        // Порівняння векторів за координатами
        bool operator==(const vector3D& v) const;
        bool operator!=(const vector3D& v) const;

        // Довжина вектора
        double length() const;

        // Порівняння векторів за довжиною
        bool operator>(const vector3D& v) const;
        bool operator<(const vector3D& v) const;
        bool operator>=(const vector3D& v) const;
        bool operator<=(const vector3D& v) const;
    };

    // Множення скаляра на вектор
    vector3D operator*(double k, const vector3D& v);
}
