#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerBehaviorLcdsForcedClientShutdown { 
    std::string additionalInfo;
    std::string reason; 
  };
  void to_json(json& j, const PlayerBehaviorLcdsForcedClientShutdown& v) {
  j["additionalInfo"] = v.additionalInfo; 
  j["reason"] = v.reason; 
  }
  void from_json(const json& j, PlayerBehaviorLcdsForcedClientShutdown& v) {
  v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  v.reason = j.at("reason").get<std::string>(); 
  }
}