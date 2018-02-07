#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct AlertDTO { 
    int64_t alertTime; 
  };
  inline void to_json(json& j, const AlertDTO& v) {
    j["alertTime"] = v.alertTime; 
  }
  inline void from_json(const json& j, AlertDTO& v) {
    v.alertTime = j.at("alertTime").get<int64_t>(); 
  }
}