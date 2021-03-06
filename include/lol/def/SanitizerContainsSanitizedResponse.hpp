#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SanitizerContainsSanitizedResponse { 
    bool contains; 
  };
  inline void to_json(json& j, const SanitizerContainsSanitizedResponse& v) {
    j["contains"] = v.contains; 
  }
  inline void from_json(const json& j, SanitizerContainsSanitizedResponse& v) {
    v.contains = j.at("contains").get<bool>(); 
  }
}