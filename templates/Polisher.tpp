template <typename T>
bool Polisher<T>::isNegativeNumber(const T &number) {
    if(number < 0) {
        return true;
    }
    return false;
}

template <typename T>
std::string Polisher<T>::polishTheNumber(const T &number) {
    std::stringstream string_stream;

    if(isNegativeNumber(number)) {
        string_stream << '(' << (number * -1) << ')';
        return string_stream.str();
    }
    string_stream << number;
    return string_stream.str();
}