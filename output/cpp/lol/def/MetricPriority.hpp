#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct MetricPriority {  
    high_e = 2,
    low_e = 0,
    medium_e = 1,
  };
  void to_json(json& j, const MetricPriority& v) {
  if(v == MetricPriority::high_e) {
    j = "high";
    return;
  }
  if(v == MetricPriority::low_e) {
    j = "low";
    return;
  }
  if(v == MetricPriority::medium_e) {
    j = "medium";
    return;
  }
  }
  void from_json(const json& j, MetricPriority& v) {
  if(j.get<std::string>() == "high") {
    v = MetricPriority::high_e;
    return;
  } 
  if(j.get<std::string>() == "low") {
    v = MetricPriority::low_e;
    return;
  } 
  if(j.get<std::string>() == "medium") {
    v = MetricPriority::medium_e;
    return;
  } 
  }
}