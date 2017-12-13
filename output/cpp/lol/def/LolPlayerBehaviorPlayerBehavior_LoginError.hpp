#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginError { 
    std::string messageId;
    std::string id;
    std::string description; 
  };
  void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginError& v) {
  j["messageId"] = v.messageId; 
  j["id"] = v.id; 
  j["description"] = v.description; 
  }
  void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginError& v) {
  v.messageId = j.at("messageId").get<std::string>(); 
  v.id = j.at("id").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  }
}