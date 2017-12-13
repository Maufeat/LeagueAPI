#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerNotificationConfigResource { 
    std::optional<uint64_t> ExpirationCheckFrequency; 
  };
  void to_json(json& j, const PlayerNotificationConfigResource& v) {
  j["ExpirationCheckFrequency"] = v.ExpirationCheckFrequency; 
  }
  void from_json(const json& j, PlayerNotificationConfigResource& v) {
  v.ExpirationCheckFrequency = j.at("ExpirationCheckFrequency").get<std::optional<uint64_t>>(); 
  }
}