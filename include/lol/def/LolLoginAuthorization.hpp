#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginAuthorization { 
    uint64_t currentAccountId;
    std::string subject;
    std::string currentPlatformId; 
  };
  inline void to_json(json& j, const LolLoginAuthorization& v) {
    j["currentAccountId"] = v.currentAccountId; 
    j["subject"] = v.subject; 
    j["currentPlatformId"] = v.currentPlatformId; 
  }
  inline void from_json(const json& j, LolLoginAuthorization& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.subject = j.at("subject").get<std::string>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
  }
}