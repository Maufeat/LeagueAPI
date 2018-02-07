#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthAuthorization { 
    std::string currentPlatformId;
    uint64_t currentAccountId;
    std::string subject; 
  };
  inline void to_json(json& j, const RsoAuthAuthorization& v) {
    j["currentPlatformId"] = v.currentPlatformId; 
    j["currentAccountId"] = v.currentAccountId; 
    j["subject"] = v.subject; 
  }
  inline void from_json(const json& j, RsoAuthAuthorization& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.subject = j.at("subject").get<std::string>(); 
  }
}