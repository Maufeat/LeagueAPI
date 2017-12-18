#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsGameNotification { 
    std::string messageArgument;
    std::string type;
    std::string messageCode; 
  };
  inline void to_json(json& j, const MatchmakingLcdsGameNotification& v) {
    j["messageArgument"] = v.messageArgument; 
    j["type"] = v.type; 
    j["messageCode"] = v.messageCode; 
  }
  inline void from_json(const json& j, MatchmakingLcdsGameNotification& v) {
    v.messageArgument = j.at("messageArgument").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.messageCode = j.at("messageCode").get<std::string>(); 
  }
}