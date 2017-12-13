#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashGameflowAvailability { 
    bool isAvailable; 
  };
  void to_json(json& j, const LolClashGameflowAvailability& v) {
  j["isAvailable"] = v.isAvailable; 
  }
  void from_json(const json& j, LolClashGameflowAvailability& v) {
  v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
}