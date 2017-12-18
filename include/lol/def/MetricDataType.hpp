#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct MetricDataType {  
    bool_e = 4,
    float_e = 3,
    int_e = 1,
    string_e = 5,
    uint_e = 2,
    unknown_e = 0,
  };
  inline void to_json(json& j, const MetricDataType& v) {
    if(v == MetricDataType::bool_e) {
      j = "bool";
      return;
    }
    if(v == MetricDataType::float_e) {
      j = "float";
      return;
    }
    if(v == MetricDataType::int_e) {
      j = "int";
      return;
    }
    if(v == MetricDataType::string_e) {
      j = "string";
      return;
    }
    if(v == MetricDataType::uint_e) {
      j = "uint";
      return;
    }
    if(v == MetricDataType::unknown_e) {
      j = "unknown";
      return;
    }
  }
  inline void from_json(const json& j, MetricDataType& v) {
    if(j.get<std::string>() == "bool") {
      v = MetricDataType::bool_e;
      return;
    } 
    if(j.get<std::string>() == "float") {
      v = MetricDataType::float_e;
      return;
    } 
    if(j.get<std::string>() == "int") {
      v = MetricDataType::int_e;
      return;
    } 
    if(j.get<std::string>() == "string") {
      v = MetricDataType::string_e;
      return;
    } 
    if(j.get<std::string>() == "uint") {
      v = MetricDataType::uint_e;
      return;
    } 
    if(j.get<std::string>() == "unknown") {
      v = MetricDataType::unknown_e;
      return;
    } 
  }
}