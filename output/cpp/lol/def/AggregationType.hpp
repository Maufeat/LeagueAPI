#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct AggregationType {  
    average_e = 2,
    none_e = 0,
    sum_e = 1,
  };
  void to_json(json& j, const AggregationType& v) {
    if(v == AggregationType::average_e) {
      j = "average";
      return;
    }
    if(v == AggregationType::none_e) {
      j = "none";
      return;
    }
    if(v == AggregationType::sum_e) {
      j = "sum";
      return;
    }
  }
  void from_json(const json& j, AggregationType& v) {
    if(j.get<std::string>() == "average") {
      v = AggregationType::average_e;
      return;
    } 
    if(j.get<std::string>() == "none") {
      v = AggregationType::none_e;
      return;
    } 
    if(j.get<std::string>() == "sum") {
      v = AggregationType::sum_e;
      return;
    } 
  }
}