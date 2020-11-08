// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRAININGDATA_SERIALIZATION_H_
#define FLATBUFFERS_GENERATED_TRAININGDATA_SERIALIZATION_H_

#include "flatbuffers.h"

namespace Serialization {

struct Data;

struct TrainingData;

struct Data FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT__INPUT = 4,
    VT__OUTPUT = 6
  };
  const flatbuffers::Vector<float> *_input() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT__INPUT);
  }
  const flatbuffers::Vector<float> *_output() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT__OUTPUT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT__INPUT) &&
           verifier.Verify(_input()) &&
           VerifyOffset(verifier, VT__OUTPUT) &&
           verifier.Verify(_output()) &&
           verifier.EndTable();
  }
};

struct DataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add__input(flatbuffers::Offset<flatbuffers::Vector<float>> _input) {
    fbb_.AddOffset(Data::VT__INPUT, _input);
  }
  void add__output(flatbuffers::Offset<flatbuffers::Vector<float>> _output) {
    fbb_.AddOffset(Data::VT__OUTPUT, _output);
  }
  explicit DataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DataBuilder &operator=(const DataBuilder &);
  flatbuffers::Offset<Data> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Data>(end);
    return o;
  }
};

inline flatbuffers::Offset<Data> CreateData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<float>> _input = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> _output = 0) {
  DataBuilder builder_(_fbb);
  builder_.add__output(_output);
  builder_.add__input(_input);
  return builder_.Finish();
}

inline flatbuffers::Offset<Data> CreateDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<float> *_input = nullptr,
    const std::vector<float> *_output = nullptr) {
  return Serialization::CreateData(
      _fbb,
      _input ? _fbb.CreateVector<float>(*_input) : 0,
      _output ? _fbb.CreateVector<float>(*_output) : 0);
}

struct TrainingData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT__TIME_STEEP = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Data>> *_time_steep() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Data>> *>(VT__TIME_STEEP);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT__TIME_STEEP) &&
           verifier.Verify(_time_steep()) &&
           verifier.VerifyVectorOfTables(_time_steep()) &&
           verifier.EndTable();
  }
};

struct TrainingDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add__time_steep(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Data>>> _time_steep) {
    fbb_.AddOffset(TrainingData::VT__TIME_STEEP, _time_steep);
  }
  explicit TrainingDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TrainingDataBuilder &operator=(const TrainingDataBuilder &);
  flatbuffers::Offset<TrainingData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TrainingData>(end);
    return o;
  }
};

inline flatbuffers::Offset<TrainingData> CreateTrainingData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Data>>> _time_steep = 0) {
  TrainingDataBuilder builder_(_fbb);
  builder_.add__time_steep(_time_steep);
  return builder_.Finish();
}

inline flatbuffers::Offset<TrainingData> CreateTrainingDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Data>> *_time_steep = nullptr) {
  return Serialization::CreateTrainingData(
      _fbb,
      _time_steep ? _fbb.CreateVector<flatbuffers::Offset<Data>>(*_time_steep) : 0);
}

inline const Serialization::TrainingData *GetTrainingData(const void *buf) {
  return flatbuffers::GetRoot<Serialization::TrainingData>(buf);
}

inline bool VerifyTrainingDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Serialization::TrainingData>(nullptr);
}

inline void FinishTrainingDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Serialization::TrainingData> root) {
  fbb.Finish(root);
}

}  // namespace Serialization

#endif  // FLATBUFFERS_GENERATED_TRAININGDATA_SERIALIZATION_H_