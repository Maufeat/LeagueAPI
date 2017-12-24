#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginError { 
    std::string id;
    std::string description;
    std::string messageId; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["messageId"] = v.messageId; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
  }
}