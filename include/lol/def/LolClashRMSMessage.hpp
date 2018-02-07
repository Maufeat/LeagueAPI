#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRMSMessage { 
    std::string payload; 
  };
  inline void to_json(json& j, const LolClashRMSMessage& v) {
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolClashRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>(); 
  }
}