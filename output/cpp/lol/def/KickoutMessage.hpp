#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct KickoutMessage { 
    std::string message; 
  };
  void to_json(json& j, const KickoutMessage& v) {
  j["message"] = v.message; 
  }
  void from_json(const json& j, KickoutMessage& v) {
  v.message = j.at("message").get<std::string>(); 
  }
}