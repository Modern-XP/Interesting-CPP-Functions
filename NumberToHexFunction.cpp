/* Header file */
// This isn't necessary of course.
// I'd just like to make it a bit shorter.
// TODO: Make separate header file here to put all definitions in.
#define sStr std::string
#define sToS std::to_string

template <typename T>
sStr NumToHex(T Num);

/* C++ file */
template <typename T>
sStr NumToHex(T Num) {
    sStr Result;
    short HexDigits = sizeof(Num) * 2;
    for (int i = 0; i < HexDigits; i++) {
        char ByteCase = (Num >> (4 * i)) & 15;
        switch (ByteCase) {
        case 10:
            Result.insert(0, "A");
            break;
        case 11:
            Result.insert(0, "B");
            break;
        case 12:
            Result.insert(0, "C");
            break;
        case 13:
            Result.insert(0, "D");
            break;
        case 14:
            Result.insert(0, "E");
            break;
        case 15:
            Result.insert(0, "F");
            break;
        default:
            Result.insert(0, sToS(ByteCase));
            break;
        }
    }
    return Result;
}
