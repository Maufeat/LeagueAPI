#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginError { 
    std::string description;
    std::string messageId;
    std::string id; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    j["description"] = v.description; 
    j["messageId"] = v.messageId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    v.description = j.at("description").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}