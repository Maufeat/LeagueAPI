#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashKdaClassification { /**/ 
    AVERAGE_e = 1, /**/ 
    HIGH_e = 2, /**/ 
    LOW_e = 0, /**/ 
  };
  static void to_json(json& j, const LolClashKdaClassification& v) {
    switch(v) { 
    case LolClashKdaClassification::AVERAGE_e:
      j = "AVERAGE";
    break;
    case LolClashKdaClassification::HIGH_e:
      j = "HIGH";
    break;
    case LolClashKdaClassification::LOW_e:
      j = "LOW";
    break;
    };
  }
  static void from_json(const json& j, LolClashKdaClassification& v) {
    auto s = j.get<std::string>(); 
    if(s == "AVERAGE") {
      v = LolClashKdaClassification::AVERAGE_e;
      return;
    } 
    if(s == "HIGH") {
      v = LolClashKdaClassification::HIGH_e;
      return;
    } 
    if(s == "LOW") {
      v = LolClashKdaClassification::LOW_e;
      return;
    } 
  }
} 