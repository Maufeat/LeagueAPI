#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginAuthorization { 
    std::string currentPlatformId;
    std::string subject;
    uint64_t currentAccountId; 
  };
  void to_json(json& j, const LolLoginAuthorization& v) {
  j["currentPlatformId"] = v.currentPlatformId; 
  j["subject"] = v.subject; 
  j["currentAccountId"] = v.currentAccountId; 
  }
  void from_json(const json& j, LolLoginAuthorization& v) {
  v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
  v.subject = j.at("subject").get<std::string>(); 
  v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
  }
}