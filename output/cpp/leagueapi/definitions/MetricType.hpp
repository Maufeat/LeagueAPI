#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class MetricType { /**/ 
    count_e = 2, /**/ 
    duration_e = 3, /**/ 
    percentage_e = 1, /**/ 
    rate_e = 4, /**/ 
    unknown_e = 0, /**/ 
  };
  static void to_json(json& j, const MetricType& v) {
    switch(v) { 
    case MetricType::count_e:
      j = "count";
    break;
    case MetricType::duration_e:
      j = "duration";
    break;
    case MetricType::percentage_e:
      j = "percentage";
    break;
    case MetricType::rate_e:
      j = "rate";
    break;
    case MetricType::unknown_e:
      j = "unknown";
    break;
    };
  }
  static void from_json(const json& j, MetricType& v) {
    auto s = j.get<std::string>(); 
    if(s == "count") {
      v = MetricType::count_e;
      return;
    } 
    if(s == "duration") {
      v = MetricType::duration_e;
      return;
    } 
    if(s == "percentage") {
      v = MetricType::percentage_e;
      return;
    } 
    if(s == "rate") {
      v = MetricType::rate_e;
      return;
    } 
    if(s == "unknown") {
      v = MetricType::unknown_e;
      return;
    } 
  }
} 