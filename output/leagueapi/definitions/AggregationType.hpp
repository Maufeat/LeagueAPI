#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class AggregationType { /**/ 
    average_e = 2, /**/ 
    none_e = 0, /**/ 
    sum_e = 1, /**/ 
  };
  static void to_json(json& j, const AggregationType& v) {
    switch(v) { 
    case AggregationType::average_e:
      j = "average";
    break;
    case AggregationType::none_e:
      j = "none";
    break;
    case AggregationType::sum_e:
      j = "sum";
    break;
    };
  }
  static void from_json(const json& j, AggregationType& v) {
    auto s = j.get<std::string>(); 
    if(s == "average") {
      v = AggregationType::average_e;
      return;
    } 
    if(s == "none") {
      v = AggregationType::none_e;
      return;
    } 
    if(s == "sum") {
      v = AggregationType::sum_e;
      return;
    } 
  }
} 