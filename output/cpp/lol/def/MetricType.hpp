#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct MetricType {  
    count_e = 2,
    duration_e = 3,
    percentage_e = 1,
    rate_e = 4,
    unknown_e = 0,
  };
  void to_json(json& j, const MetricType& v) {
    if(v == MetricType::count_e) {
      j = "count";
      return;
    }
    if(v == MetricType::duration_e) {
      j = "duration";
      return;
    }
    if(v == MetricType::percentage_e) {
      j = "percentage";
      return;
    }
    if(v == MetricType::rate_e) {
      j = "rate";
      return;
    }
    if(v == MetricType::unknown_e) {
      j = "unknown";
      return;
    }
  }
  void from_json(const json& j, MetricType& v) {
    if(j.get<std::string>() == "count") {
      v = MetricType::count_e;
      return;
    } 
    if(j.get<std::string>() == "duration") {
      v = MetricType::duration_e;
      return;
    } 
    if(j.get<std::string>() == "percentage") {
      v = MetricType::percentage_e;
      return;
    } 
    if(j.get<std::string>() == "rate") {
      v = MetricType::rate_e;
      return;
    } 
    if(j.get<std::string>() == "unknown") {
      v = MetricType::unknown_e;
      return;
    } 
  }
}