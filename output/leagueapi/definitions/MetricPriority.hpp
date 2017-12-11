#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class MetricPriority { /**/ 
    high_e = 2, /**/ 
    low_e = 0, /**/ 
    medium_e = 1, /**/ 
  };
  static void to_json(json& j, const MetricPriority& v) {
    switch(v) { 
    case MetricPriority::high_e:
      j = "high";
    break;
    case MetricPriority::low_e:
      j = "low";
    break;
    case MetricPriority::medium_e:
      j = "medium";
    break;
    };
  }
  static void from_json(const json& j, MetricPriority& v) {
    auto s = j.get<std::string>(); 
    if(s == "high") {
      v = MetricPriority::high_e;
      return;
    } 
    if(s == "low") {
      v = MetricPriority::low_e;
      return;
    } 
    if(s == "medium") {
      v = MetricPriority::medium_e;
      return;
    } 
  }
} 