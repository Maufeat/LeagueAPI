#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashKdaClassification {  
    AVERAGE_e = 1,
    HIGH_e = 2,
    LOW_e = 0,
  };
  inline void to_json(json& j, const LolClashKdaClassification& v) {
    if(v == LolClashKdaClassification::AVERAGE_e) {
      j = "AVERAGE";
      return;
    }
    if(v == LolClashKdaClassification::HIGH_e) {
      j = "HIGH";
      return;
    }
    if(v == LolClashKdaClassification::LOW_e) {
      j = "LOW";
      return;
    }
  }
  inline void from_json(const json& j, LolClashKdaClassification& v) {
    if(j.get<std::string>() == "AVERAGE") {
      v = LolClashKdaClassification::AVERAGE_e;
      return;
    } 
    if(j.get<std::string>() == "HIGH") {
      v = LolClashKdaClassification::HIGH_e;
      return;
    } 
    if(j.get<std::string>() == "LOW") {
      v = LolClashKdaClassification::LOW_e;
      return;
    } 
  }
}