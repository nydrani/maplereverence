#include <memory>
#include <vector>


#ifndef MAPLEREVERENCE_MAPLEDATA
#define MAPLEREVERENCE_MAPLEDATA

enum class IMGDataType : uint8_t {
    NONE,
    SHORT,
    INT,
    FLOAT,
    DOUBLE,
    STRING,
    EXTENDED,
    PROPERTY,
    CANVAS,
    VECTOR,
    CONVEX,
    SOUND,
    UOL
};


class IMGData {
    public:
        IMGData() {}
        //IMGData(IMGDataType type) : type(type) {}
        virtual ~IMGData() {};

        // IMGDataType getType() const;

    private:
        // IMGDataType type;
};

class ShortIMGData : public IMGData {
    public:
        ShortIMGData(int16_t val) : val(val) {}
        //ShortIMGData(int16_t val) : IMGData(IMGDataType::SHORT), val(val) {}
        ~ShortIMGData() {}

        int16_t getVal() const;

    private:
        int16_t val;
};

class IntIMGData : public IMGData {
    public:
        IntIMGData(int32_t val) : val(val) {}
        //IntIMGData(int32_t val) : IMGData(IMGDataType::INT), val(val) {}
        ~IntIMGData() {}

        int32_t getVal() const;

    private:
        int32_t val;
};

class FloatIMGData : public IMGData {
    public:
        FloatIMGData(float val) : val(val) {}
        //FloatIMGData(float val) : IMGData(IMGDataType::FLOAT), val(val) {}
        ~FloatIMGData() {}

        float getVal() const;

    private:
        float val;
};

class DoubleIMGData : public IMGData {
    public:
        DoubleIMGData(double val) : val(val) {}
        //DoubleIMGData(double val) : IMGData(IMGDataType::DOUBLE), val(val) {}
        ~DoubleIMGData() {}

        double getVal() const;

    private:
        double val;
};

class StringIMGData : public IMGData {
    public:
        StringIMGData(const std::string& val) : val(val) {}
        //StringIMGData(const std::string& val) : IMGData(IMGDataType::STRING), val(val) {}
        ~StringIMGData() {}

        const std::string& getVal() const;

    private:
        std::string val;
};

class CanvasIMGData : public IMGData {
    public:
        CanvasIMGData(const std::vector<uint8_t>& val) : val(val) {}
        //StringIMGData(const std::string& val) : IMGData(IMGDataType::STRING), val(val) {}
        ~CanvasIMGData() {}

        const std::vector<uint8_t>& getVal() const;

    private:
        std::vector<uint8_t> val;
};

// output operator
// std::ostream& operator<<(std::ostream&, const IMGData&);

#endif