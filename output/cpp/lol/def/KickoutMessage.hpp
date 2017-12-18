#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct KickoutMessage { 
    std::string message; 
  };
  inline void to_json(json& j, const KickoutMessage& v) {
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, KickoutMessage& v) {
    v.message = j.at("message").get<std::string>(); 
  }
}