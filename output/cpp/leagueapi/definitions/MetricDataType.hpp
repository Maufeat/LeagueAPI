#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class MetricDataType { /**/ 
    bool_e = 4, /**/ 
    float_e = 3, /**/ 
    int_e = 1, /**/ 
    string_e = 5, /**/ 
    uint_e = 2, /**/ 
    unknown_e = 0, /**/ 
  };
  static void to_json(json& j, const MetricDataType& v) {
    switch(v) { 
    case MetricDataType::bool_e:
      j = "bool";
    break;
    case MetricDataType::float_e:
      j = "float";
    break;
    case MetricDataType::int_e:
      j = "int";
    break;
    case MetricDataType::string_e:
      j = "string";
    break;
    case MetricDataType::uint_e:
      j = "uint";
    break;
    case MetricDataType::unknown_e:
      j = "unknown";
    break;
    };
  }
  static void from_json(const json& j, MetricDataType& v) {
    auto s = j.get<std::string>(); 
    if(s == "bool") {
      v = MetricDataType::bool_e;
      return;
    } 
    if(s == "float") {
      v = MetricDataType::float_e;
      return;
    } 
    if(s == "int") {
      v = MetricDataType::int_e;
      return;
    } 
    if(s == "string") {
      v = MetricDataType::string_e;
      return;
    } 
    if(s == "uint") {
      v = MetricDataType::uint_e;
      return;
    } 
    if(s == "unknown") {
      v = MetricDataType::unknown_e;
      return;
    } 
  }
} 